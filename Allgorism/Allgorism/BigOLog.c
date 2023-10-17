#include <stdio.h>
  int arr[10];
  int start = 0, end = 9;

  void my_f(int n){
    int mid = (start + end) / 2;
    if(arr[mid] == n){
      printf("찾는 수의 위치는 %d", mid);
    }
    else if (arr[mid] > n) {
      end = mid - 1;
      my_f(n);
    }
    else {
      start = mid + 1;
      my_f(n);
    }
  }
  
int main(){
  int n;

  for(int i = 0; i<10; i++){
    arr[i] = i+1;
    printf("arr[%d] = %d\n", i, arr[i]); 
  }

  printf("찾고자 하는 수 입력");
  scanf("%d", &n);
  my_f(n);
}

