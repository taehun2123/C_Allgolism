#include <stdio.h>

int main(){
  char name[100];
  char address[100];

  printf("이름을 입력하세요: ");
  // scanf("%s", name);
  gets(name); // 한 줄의 문자열을 입력
  printf("주소를 입력하세요 :");
  // scanf("%s", address);
  gets(address);

  // printf("이름 : %s\n", name);
  puts(name); // 한 줄의 문자열을 출력
  // printf("주소: %s \n", address);
  puts(address);
}