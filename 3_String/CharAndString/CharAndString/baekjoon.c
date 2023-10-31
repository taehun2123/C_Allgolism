#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(){
  char alphabet[100];
  char newalpha[100];
  int k = 0;
  scanf("%s", alphabet);
  int length = strlen(alphabet);
  for(int i = 0; i<length; i++){
    if(isalpha(alphabet[i])){
      newalpha[k] = toupper(alphabet[i]);
      k++;
    }
  }
  newalpha[k] = 0;
  printf("%s", newalpha);
}