#include <stdio.h>
#include <stdlib.h>
#define MAX_STACK_SIZE 5
#define MAX_STRING 100

//자료형을 구조체로 변경
typedef struct
{
  int student_no;
  char name[MAX_STRING];
  char address[MAX_STRING];
} element;


element stack[MAX_STACK_SIZE];
int top = -1;


int is_empty(){
  return top == -1;
}

int is_full(){
  return top == (MAX_STACK_SIZE-1);
}

void push(element item){
  if(is_full()){
    fprintf(stderr, "스택 포화 에러\n");
    return;
  }
  else {
    ++top;
    stack[top] = item;
    printf("스택에 push 성공\n");
  }
}

element pop(){
  if(is_empty()){
    fprintf(stderr, "스택이 비어있습니다.\n");
  }
  else {
    element tmp = stack[top];
    --top;
    return tmp;
  }
}

element peek(){
  if(is_empty()){
    fprintf(stderr, "스택이 비어있습니다.\n");
    exit(1);
  }
  else return stack[top];
}

int main(){

  element ie = {20190001, "Hong", "Seoul"};
  element oe;

  int menu, value;
  while(1){
    printf("\n스택에 push = 1, pop = 2, peek = 3, 종료 = 4를 입력하시오>>");
    scanf("%d", &menu);
    if(menu == 1){
      printf("push할 값을 입력하시오.");
      push(ie);
    }
    else if (menu == 2){
      oe = pop();
      printf("pop한 학번은 : %d입니다\n", oe.student_no);
      printf("pop한 이름은 : %s입니다\n", oe.name);
      printf("pop한 주소는 : %s입니다\n", oe.address);
    }
    else if (menu == 3){
      oe = peek();
      printf("peek한 학번은 : %d입니다\n", oe.student_no);
      printf("peek한 이름은 : %s입니다\n", oe.name);
      printf("peek한 주소는 : %s입니다\n", oe.address);    
    }
    else if (menu == 4 ){
      break;
    }
    else {
      printf("1~4중 하나를 선택하세요");
    }
    printf("전체 스택의 요소의 %d개 입니다. \n", top+1);
  }
}