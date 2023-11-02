#include <stdio.h>
#include <string.h>
int main(){
  char s[80];
  strcpy(s, "Hello world from ");
  printf("s = %s\n", s);
  strcat(s, "strcpy ");
  printf("s = %s\n", s);
  strcat(s, "and ");
  printf("s = %s\n", s);
  strcat(s, "strcat!");
  printf("s = %s\n", s);
}