#include <stdio.h>

int main(){
  int x = 10, y = 20;
  int *p;

  p = &x;

  printf("p = %d\n", p); //x의 주소값
  printf("*p = %d\n\n", *p); //x의 주소가 가르키는 값 = 실제 x의 값

  p = &y;
  printf("p = %d\n", p); //y의 주소값
  printf("*p = %d\n", *p); //y의 주소가 가르키는 값 = 실제 y의 값
}