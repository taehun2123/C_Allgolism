#include <stdio.h>
#include <ctype.h>
int main(){
  char str[100];
  char newstr[100];
  scanf("%s", str);
  int i;
  int j = 0;
  for(i = 0; str[i] != NULL; i++){
    if(isalpha(str[i])){
      if(islower(str[i])) 
        newstr[j] = toupper(str[i]);
      else 
        newstr[j] = str[i];
      j++;
    }
  }
  str[i] = '\0';
  newstr[j] = '\0';
  printf("%s", newstr);
}