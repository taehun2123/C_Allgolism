#include <stdio.h>
int sum;

void printFibo(int n) {
	if (n > 0) {
		sum += n;
		printFibo(n - 1);
	}
	else if(n == 0) {
		printf("%d ", sum);
	}
}

int main() {
	int n;
	scanf_s("%d", &n);

	printFibo(n);
}