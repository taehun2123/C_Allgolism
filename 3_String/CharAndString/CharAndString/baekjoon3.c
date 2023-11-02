#include <stdio.h>
#include <string.h>
int main(){
  char str[100];

  scanf("%s", str);
  int length = strlen(str);
  
  for(int i = 0; i<length; i++){
    int temp = str[length-1];
    for(int j = length-1; j>=0; j--){
      str[j] = str[j-1];
    }
    str[0] = temp; 
    printf("%s\n", str);
  }
}