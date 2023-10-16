#include <stdio.h>

void printx(int n){
    if(n>0){
        printf("recursive");
        printx(n-1);
    }
}


int main(void){
    int n;
    scanf(%d, &n);

    printx(n);

    return 0;
}

