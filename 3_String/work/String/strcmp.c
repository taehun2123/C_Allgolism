#include <stdio.h>
#include <string.h>
int main(){
  char s1[80];
  char s2[80];
  int result=0;

  printf("첫번째 단어 입력>>");
  scanf("%s", s1);
  printf("두번째 단어 입력>>");
  scanf("%s", s2);
  result = strcmp(s1, s2); //첫 글자의 아스키코드 위치 수 비교
  printf("비교결과 %d\n", result); // -1, 0, 1 - 맥에서는 차이값만큼 비교결과가 출력도;ㅁ

  if(result<0) printf("s1<s2");
  else if(result == 0) printf("s1 == s2");
  else printf("s1>s2");

}