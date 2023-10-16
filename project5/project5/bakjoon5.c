#include <stdio.h>

int main() {
	int temp = 0;
	int inputNum = 0;
	int list[20] = { 0 };

	//입력
	scanf_s("%d", &inputNum);
	for (int i = 0; i < inputNum; i++) {
		scanf_s("%d", &list[i]);
	}

	//버블정렬
	for (int k = inputNum-1; k > 0; k--) {
		for (int j = 0; j < k; j++) {
			if (list[j] < list[j + 1]) {
				temp = list[j];
				list[j] = list[j + 1];
				list[j + 1] = temp;
			}
		}
	}

	// 출력
	for (int m = 0; m < inputNum; m++) {
		printf("%d ", list[m]);
	}
}