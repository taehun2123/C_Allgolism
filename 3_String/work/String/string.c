#include <stdio.h>

int main(void){
  int i;
  char str[4]="abc";
  printf("%s", str);
  printf(str); //같은 결과 값 출력됨
}