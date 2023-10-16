#include <stdio.h>

void printFibo(int n) {
	if (n > 0) {
		printf("%d ", n);
		return printFibo(n/2);
	}
}

int main() {
	int n;
	scanf_s("%d", &n);

	printFibo(n);
}