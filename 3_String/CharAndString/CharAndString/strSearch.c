// #include <stdio.h>
// #include <string.h>

// int main(){
//   char s[] = "language";
//   char c = 'g';
//   char* p; //p를 포인터 변수로 선언
//   int loc;

//   p = strchr(s,c); // 주소값 변수 p에 s문자열 중 c문자가 가장 먼저 나오는 글자를 찾아 주소를 반환
//   printf("g가 있는 주소는 %d\n", p);
//   printf("p 주소에 있는 내용은 %c\n", *p);

//   //위치 계산하기
//   loc = (int)(p-s); //여기서 s는 가장 첫 글자가 위치한 주소값을 반환
//   if (p != NULL) printf("%d 번째에 있음\n", loc);
//   else printf("발견되지 않음");
// }

#include <stdio.h>
#include <string.h>

int main(){
  char s[] = "language";
  char c = 'an';
  char* p; //p를 포인터 변수로 선언
  int loc;

  p = strstr(s,c); // 주소값 변수 p에 s문자열 중 c문자가 가장 먼저 나오는 글자를 찾아 주소를 반환
  printf("g가 있는 주소는 %d\n", p);
  printf("p 주소에 있는 내용은 %c\n", *p);

  //위치 계산하기
  loc = (int)(p-s); //여기서 s는 가장 첫 글자가 위치한 주소값을 반환
  if (p != NULL) printf("%d 번째에 있음\n", loc);
  else printf("발견되지 않음");
}
