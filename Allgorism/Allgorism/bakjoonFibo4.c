#include <stdio.h>

void printFibo(int n) {
	if (n != 1) {
		printFibo(n/2);
	}
	printf("%d ", n);
}

int main() {
	int n;
	scanf_s("%d", &n);

	printFibo(n);
}