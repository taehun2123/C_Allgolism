#include <stdio.h>
#include <string.h>

int main(){
  char s1[80];
  char s2[80];
  int result = 0;

  printf("첫번째 단어 입력>>");
  scanf("%s", s1);
  printf("두번째 단어 입력>>");
  scanf("%s", s2);
  result = strcmp(s1, s2);
  printf("비교결과 %d\n", result);

  if(result < 0) printf("s1<s2");
  else if (result == 0) printf("s1=s2");
  else printf("s1>s2"); 
}