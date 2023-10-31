#include <stdio.h>
#include <string.h>
int main(){
  char s[] = "Man is immotal, because he has a soul";
  char seps[] = " ,";
  char* token;

  token = strtok(s, seps);
  while(token != NULL)
  {
    printf("%s\n", token);
    token = strtok(NULL, seps); // NULL을 주면 이전에 찾았던 구문자 뒤에서 부터 찾아라.
  }
}