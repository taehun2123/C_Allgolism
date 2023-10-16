#include <stdio.h>

int main() {
	int i = 0;
	int k = 0;
	int sum = 0;
	int doSum = 0;
	//홀수만 더하는 함수
	while (i < 10) {
		i++;
		if (i % 2 == 1) {
			sum += i;
			printf("%d", sum);
		}
	}
	printf("\n");
	//do while을 이용한 반복문..
	do {
		k++;
		doSum += k;
		printf("%d", doSum);
	} while (k < 10);
}