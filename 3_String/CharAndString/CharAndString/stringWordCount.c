#include <stdio.h>
#include <ctype.h>
int count_word(char* s);

int main(){
  int wc = count_word("the c book...");
  printf("결과 값은 : %d 입니다.\n", wc);
}

int count_word(char* s){
  int wc = 0, waiting = 1;
  for(int i = 0; s[i] != NULL; i++){
    if(isalpha(s[i])){
      if(waiting){
        wc++;
        waiting = 0;
      }
    }
    else waiting = 1;
  }
  return wc;
}
