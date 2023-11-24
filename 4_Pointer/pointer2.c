#include <stdio.h>

int main(){
  int i = 10;
  int *p;

  p = &i;
  printf("i = %d\n", i);

  *p = 20;
  printf("i = %d\n", i); // 포인터를 통해 변수의 값 변경
}