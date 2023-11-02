#include <stdio.h>
#include <string.h>
int main(){
  char str[100];
  char* token;
  int cnt = 0;
  gets(str);

  token = strtok(str, " ");
  while(token != NULL){
    cnt++;
    token = strtok(NULL, " "); //NULL을 주면 찾았던 문자 뒤에서 토큰 분리를 함
  }
  printf("%d", cnt);
}