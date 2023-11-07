#include <stdio.h>
#include <string.h>
struct student{
  int number;
  char name[10];
  double grade;
};

int main(){
  struct student s;

  s.number = 20231107;
  strcpy(s.name, "김태훈"); //c언어에서 문자열을 집어넣을 때는 strcpy를 이용하여 복사하여 넣는다.
  s.grade = 4.5;

  printf("학번: %d\n", s.number);
  printf("이름: %s\n", s.name);
  printf("학점: %.1f\n", s.grade);
}