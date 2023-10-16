#include <stdio.h>

void printReclusive(int n) {
	if (n > 0) {
		printf("Reclusive\n");
		printReclusive(n-1);
	}
}

int main(){
	int n;

	scanf_s("%d", &n);

	printReclusive(n);
}