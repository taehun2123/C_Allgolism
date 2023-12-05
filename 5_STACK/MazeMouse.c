#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#define MAX_STACK_SIZE 100
#define MAZE_SIZE 6

typedef struct
{
  short r, c;
} element;

//스택 구조체
typedef struct
{
  element data[MAX_STACK_SIZE];
  int top;
} StackType;

element here = { 1, 0 }, entry = { 1, 0 };

char maze[MAZE_SIZE][MAZE_SIZE] =
{
  { '1','1','1','1','1','1'},
  { 'e','0','1','0','0','1'},
  { '1','0','0','0','1','1'},
  { '1','0','1','0','1','1'},
  { '1','0','1','0','0','x'},
  { '1','1','1','1','1','1'},
};

//------------- 스택 시작 ---------------//

//스택 초기화
void init_stack(StackType *s)
{
  s->top = -1;
};

//공백 상태
int is_empty(StackType *s){
  return (s->top == -1);
}

//포화
int is_full(StackType *s){
  return (s->top == MAX_STACK_SIZE-1);
}

//삽입
void push(StackType *s, element item){
  if(is_full(s)){
    fprintf(stderr, "스택 포화 에러\n");
    return;
  }
  else s->data[++(s->top)] = item;
}
//삭제
element pop(StackType *s){
  if(is_empty(s)){
    fprintf(stderr, "스택 공백 에러\n");
    exit(1);
  }
  else {
    return s->data[(s->top)--];
  }
}
//검색
element peek(StackType *s){
  if(is_empty(s)){
    fprintf(stderr, "스택 공백 에러\n");
    exit(1);
  }
  else return s->data[s->top];
}
//------------------- 스택 끝 --------------- //


int push_loc(StackType *s, int r, int c) {
    if(r < 0 || c < 0);
    if(maze[r][c] != '1' && maze[r][c] != '.'){
      element tmp;
      tmp.r = r;
      tmp.c = c;
      push(s, tmp);
    }
}

//중위 표기 수식 -> 후위 표기 수식
void maze_print(char maze[MAZE_SIZE][MAZE_SIZE]) {
  printf("\n");
  for(int r = 0; r < MAZE_SIZE; r++){
    for (int c = 0; c<MAZE_SIZE; c++){
      printf("%c", maze[r][c]);
    }
    printf("\n");
  }
}



// 메인
int main(){
  int r,c;
  StackType s;

  init_stack(&s);
  here = entry;
  while(maze[here.r][here.c] != 'x') {
    r = here.r;
    c = here.c;
    maze[r][c] = '.';
    maze_print(maze);
    push_loc(&s, r-1, c);
    push_loc(&s, r+1, c);
    push_loc(&s, r, c-1);
    push_loc(&s, r, c+1);
    if(is_empty(&s)){
      printf("실패\n");
    }
    else
      here = pop(&s);
      sleep(2);
  }
  printf("성공\n");
}