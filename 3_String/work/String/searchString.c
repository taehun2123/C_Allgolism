#include <stdio.h>
#include <string.h>
int main(){
  char s[] = "language";
  char c[] = "an";
  char* p;
  int loc;

  p = strstr(s, c);
  printf("g가 위치한 주소는 %d\n", p);
  printf("p주소에 있는 내용은 %c\n", *p);

  loc = (int)(p-s);
  if(p != NULL) printf("%d 번째에 있습니다\n", loc);
  else printf("발견되지 않음"); 
}