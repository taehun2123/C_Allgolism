#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
//MALLOC.C : MALLOC을 이용하여 정수 10을 저장할 수 있는 동적 메모리를 할당하고
// free를 이용하여 메모리를 반납한다.

int main(){
  int *p;
  p = (int *)malloc(SIZE *  sizeof(int)); //동적 배열 생성
  if(p == NULL){
    fprintf(stderr, "메모리가 부족하여 할당할 수 없습니다.");
    exit(1);
  }

  for(int i=0; i<SIZE; i++){
    p[i] = i;
  }

  for(int i = 0; i<SIZE; i++)
    printf("%d",p[i]);

  free(p); //메모리 반납(가비지 컬렉터)
}