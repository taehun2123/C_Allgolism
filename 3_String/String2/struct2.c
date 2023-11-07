#include <stdio.h>

struct student{
  int num;
  char name[10];
  double grade;
};

int main(){
  struct student s;

  printf("학번을 입력하세요: ");
  scanf("%d", &s.num);
  printf("이름을 입력하세요: ");
  scanf("%s",s.name,10); //버퍼 크기까지 입력
  printf("학점을 입력하세요(실수): ");
  scanf("%lf", &s.grade);

  printf("\n학번: %d\n", s.num);
  printf("이름: %s\n", s.name);
  printf("학점: %.1f\n", s.grade);
}