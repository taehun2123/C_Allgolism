#include <stdio.h>
#define SIZE 6
#include "get_int.h"

int cal_sum(int list[]){
  int sum = 0;
  for(int i = 0; i< SIZE; i++){
    sum += *(list+i);
  }
  return sum;
}

int main(){
  int list[SIZE];
  get_integer(list);
  printf("합 = %d\n", cal_sum(list));
}