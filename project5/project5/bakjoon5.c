#include <stdio.h>

int main() {
	int temp = 0;
	int inputNum = 0;
	int list[20] = { 0 };

	//�Է�
	scanf_s("%d", &inputNum);
	for (int i = 0; i < inputNum; i++) {
		scanf_s("%d", &list[i]);
	}

	//��������
	for (int k = inputNum-1; k > 0; k--) {
		for (int j = 0; j < k; j++) {
			if (list[j] < list[j + 1]) {
				temp = list[j];
				list[j] = list[j + 1];
				list[j + 1] = temp;
			}
		}
	}

	// ���
	for (int m = 0; m < inputNum; m++) {
		printf("%d ", list[m]);
	}
}