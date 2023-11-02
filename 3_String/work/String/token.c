#include <stdio.h>
#include <string.h>
int main(){
  char s[] = "Man is immotal, because he has a soul";
  char* token;

  token = strtok(s, " ,");
  while(token != NULL){
    printf("%s\n", token);
    token = strtok(NULL, " ,"); //NULL을 주면 찾았던 문자 뒤에서 토큰 분리를 함
  }
}