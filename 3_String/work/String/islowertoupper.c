#include <stdio.h>
#include <ctype.h>

int main(){
  int c;

  while((c=getchar()) != EOF){
    if(islower(c)){
      putchar(toupper(c));
    } else
    putchar(c);
  }
}