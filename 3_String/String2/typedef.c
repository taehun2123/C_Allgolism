#include <stdio.h>

typedef struct studentTag{
  char name[10];
  int age;
  double gpa;
} student;

int main(){
  student a = {"kim", 20, 4.3};
  student b = {"park", 21, 4.2};

  printf("a의 객체 : %s, %d, %.1f\n", a.name,a.age,a.gpa);
  printf("b의 객체 : %s, %d, %.1f", b.name,b.age,b.gpa);

};
