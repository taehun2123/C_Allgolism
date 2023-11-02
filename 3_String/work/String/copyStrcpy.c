#include <stdio.h>

int main(){
  char str[30] = "C language is easy";

  printf("문자열\"%s\"\n", str); // C language is easy
  strcpy(str, "World");
  printf("문자열\"%s\"\n", str); // World
}