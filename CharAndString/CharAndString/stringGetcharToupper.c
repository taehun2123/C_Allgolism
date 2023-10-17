#include <stdio.h>
#include <ctype.h>

int main(){
  int c;

  while((c=getchar()) != EOF){
    if( islower(c)){ // 소문자인지 검사
      c = toupper(c); // 소문자면 대문자로 변환
    }
    putchar(c);
  }
}