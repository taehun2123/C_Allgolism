#include <stdio.h>

int main() {
	int i = 0;
	int k = 0;
	int sum = 0;
	int doSum = 0;
	//Ȧ���� ���ϴ� �Լ�
	while (i < 10) {
		i++;
		if (i % 2 == 1) {
			sum += i;
			printf("%d", sum);
		}
	}
	printf("\n");
	//do while�� �̿��� �ݺ���..
	do {
		k++;
		doSum += k;
		printf("%d", doSum);
	} while (k < 10);
}