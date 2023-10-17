#include <stdio.h>

void printFibo(int n) {
	if (n != 1) { //거꾸로 출력
		printFibo(n/2);
	}
	printf("%d ", n);
}

int main() {
	int n;
	scanf("%d", &n);

	printFibo(n);
}