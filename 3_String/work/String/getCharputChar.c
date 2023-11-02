#include <stdio.h>
// 버퍼 사용하는 getchar(), putchar() - 무한 입력받기
int main(){
  int ch;
  while((ch=getchar()) != EOF){ //EOF는 끝을 나타내는 문자, 정수형임.
    putchar(ch);
  }
}