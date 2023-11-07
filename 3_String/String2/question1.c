#include <stdio.h>
#include <math.h>
struct location1
{
  int x;
  int y;
};

struct location2
{
  int x;
  int y;
};

int main(){
  struct location1 a;
  struct location2 b;

  printf("a점의 좌표를 입력하시오(x y): ");
  scanf("%d", &a.x);
  scanf("%d", &a.y);

  printf("b점의 좌표를 입력하시오(x y): ");
  scanf("%d", &b.x);
  scanf("%d", &b.y);

  double distance = sqrt(pow((b.x - a.x),2) + pow((b.y - a.y),2));

  printf("거리는 %f입니다.", distance);
}