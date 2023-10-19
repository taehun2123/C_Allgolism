#include <stdio.h>
#include <stdbool.h>

int printFibonachi(int n) {
	if (n <= 0) return 0;
	else if (n == 1) return 1;
	else return (printFibonachi(n - 1) + printFibonachi(n - 2));
}


int main() {
	int n, i;

	printf("피보나치 수열을 구할 수를 입력하세요 >>");
	scanf("%d", &n);
	for(int i = 0; i<n; i++){
		printf("%d, ", printFibonachi(i));
	}
}