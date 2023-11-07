#include <stdio.h>

struct angle{
  int x;
  int y;
};

int main(){
  struct angle a,b,c;

  printf("꼭지점 a(x, y) : ");
  scanf("%d %d", &a.x, &a.y);
  printf("꼭지점 b(x, y) : ");
  scanf("%d %d", &b.x, &b.y);
  printf("꼭지점 c(x, y) : ");
  scanf("%d %d", &c.x, &c.y);

  double calculateX = (double)(a.x+b.x+c.x) / 3;
  double calculateY = (double)(a.y+b.y+c.y) / 3;

  printf("(%.1f, %.1f)", calculateX, calculateY);
}