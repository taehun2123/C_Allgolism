#include <stdio.h>

int main(){
  char name[100];
  char address[100];

  printf("이름을 입력하시오: ");
  scanf("%s", name); // 입력 : 김 태 훈
  //gets(name); // 입력 : 김 태 훈
  printf("주소를 입력하시오: ");
  scanf("%s", address); // 입력 : 입력안됨
  //gets(address); // 입력 : 울 산 중 구 

  printf("이름: %s \n", name); // 출력 : 김
  printf("주소: %s \n", address); // 출력 : 태
  //puts(name); // 출력 : 김 태 훈
  //puts(address); // 출력 : 울 산 중 구
}