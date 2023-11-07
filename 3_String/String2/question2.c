#include <stdio.h>
#include <string.h>
// struct schoolReset{
//   char schoolName[20];
//   int grade;
// };

struct school{
  char schoolName[20];
  int grade;
};

int main(){
  // struct schoolReset sr;
  struct school s, s1;
  // struct school s1;

  strcpy(s1.schoolName, "Jejuelementary");
  s1.grade = 6;


  scanf("%s", s.schoolName, 20);
  scanf("%d", &s.grade);

  
  // printf("%d grade in %s School\n", sr.grade, sr.schoolName);
  printf("%d grade in %s School\n", s1.grade, s1.schoolName);
  printf("%d grade in %s School", s.grade, s.schoolName);


}