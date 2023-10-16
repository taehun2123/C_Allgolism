#include <stdio.h>

void printFibo(int n) {
	if (n > 0) {
		printf("%d ", n);
		printFibo(n - 1);
	}
}

int main() {
	int n;
	scanf("%d", &n);

	printFibo(n);
}