#include <stdio.h>
#include <string.h>
int main(){
  char s[80];
  printf("s = %s\n", s); //studio에서는 쓰레기 값 나옴
  strcpy(s, "Hello world from ");
  printf("s = %s\n", s);
  strcat(s, "strcpy ");
  printf("s = %s\n", s);
  strcat(s, "and ");
  printf("s = %s\n", s);
  strcat(s, "strcat!");
  printf("s = %s\n", s);
}