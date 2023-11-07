#include<stdio.h>
#include<string.h>

int main(){
  char s[100];
  char ch;
  int cnt = 0, i;
  printf("문자열 입력 >>");
  gets(s);

  for(ch = 'a'; ch <= 'z'; ch++){
    for(i = 0; i< strlen(s); i++){
      if(s[i] == ch) cnt++;
    }
    if(cnt>0) printf("%c : %d\n", ch, cnt);
    cnt = 0;
  }
}