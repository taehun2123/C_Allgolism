//Call by Value
#include <stdio.h>

void swap(int *a, int *b){
  int temp = *a;
  *a = *b;
  *b = temp;

  printf("swap 함수에서 a= %d, b= %d\n",*a,*b);
}


int main(){
  int a = 10, b = 20;
  printf("swap 호출 전 a = %d, b = %d\n", a,b);
  swap(&a,&b);
  printf("swap 호출 후 a = %d, b = %d\n", a,b);
}