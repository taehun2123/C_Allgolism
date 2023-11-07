#include <stdio.h>
#include <stdlib.h>
int main(){
  char s[] = "100";
  char s2[] = "12.93";
  char buf[100];

  int i;
  double d, result;

  i = atoi(s);
  printf("%d\n", i);

  d= atof(s2);
  printf("%.2f\n", d);

  result = i + d;
  printf("%.2f\n", result);

  sprintf(buf, "%.2f", result);
  printf("연산결과 : %s\n", buf);
}