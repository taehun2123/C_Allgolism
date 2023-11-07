#include <stdio.h>

int main(){
  char s[] = "100";
  int v;

  sscanf(s, "%d", &v);
  printf("%d\n", v);
  v++;
  sprintf(s, "%d", v);
  printf("%s\n", s);
}