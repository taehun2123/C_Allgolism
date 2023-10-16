#include <stdio.h>
#define SIZE 10

int main(void) {
	int list[SIZE] = { 3, 2, 9, 7, 1, 4, 8, 0, 6, 5 };
	int temp;
	// 버블정렬 내림차순
	for (int i = SIZE - 1; i > 0; i--) {
		for (int j = 0; j < i; j++) {
			if (list[j] < list[j + 1]) {
				temp = list[j];
				list[j] = list[j + 1];
				list[j + 1] = temp;
			}
		}
	}
	printf("정렬된 숫자\n");
	for (int k = 0; k < SIZE; k++) {
		printf("%d ",list[k]);
	}
}