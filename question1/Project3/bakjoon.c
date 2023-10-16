#include <stdio.h>
#define MAX_NUM 100

int main(void) {
	int max_i = 0;
	int num[MAX_NUM] = { 0 };
	int i;
	for (i = 0; i < MAX_NUM; i++) {
		scanf_s("%d", &num[i]);
		if (num[i] == 0) {
			max_i = i;
			break;
		}
	}
	for (int j = max_i - 1; j >= 0; j--) {
		printf("%d ", num[j]);
	}
}