#include<stdio.h>

int arr[10] = { 5, 9, 10, 17, 21, 29, 33, 37, 38, 43};

int main(){
  int n, cnt = 0;

  printf("찾고자 하는 수를 입력 하시요");
  scan("%d", &n);

  for(int i =0; i<10; i++){
    cnt++;
    if(arr[i] == n){
      printf("비교 횟수 = %d", cnt);
      break;
    }
  }
}