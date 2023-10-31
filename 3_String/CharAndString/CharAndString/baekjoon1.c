#include <stdio.h>
#include <string.h>
int main(){
  char s[100];
  char seps[] = " ";
  char* token;
  int cnt = 0;
  gets(s); //공백 포함 입력받는 함수

  token = strtok(s, seps);
  while(token != NULL)
  {
    cnt++;
    token = strtok(NULL, seps); // NULL을 주면 이전에 찾았던 문자 뒤에서 부터 찾아라.
  }
  printf("%d", cnt);
}