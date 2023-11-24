#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int main(){
  int *p;
  p = (int *)malloc(SIZE *  sizeof(int));
  if(p == NULL){
    fprintf(stderr, "메모리가 부족하여 할당할 수 없습니다.");
    exit(1);
  }

  for(int i=0; i<SIZE; i++){
    p[i] = i;
  }

  for(int i = 0; i<SIZE; i++)
    printf("%d",p[i]);

  free(p);
}