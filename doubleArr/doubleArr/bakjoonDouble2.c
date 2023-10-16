#include <stdio.h>
#define ROWS 2
#define COLS 4

int main() {
	int inputNumArr[ROWS][COLS] = { 0 };
	int inputNumArr2[ROWS][COLS] = { 0 };
	int crossNum[ROWS][COLS] = {0};

	printf("1번 배열의 입력값을 입력하세요");
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			scanf_s("%d", &inputNumArr[i][j]);
		}
	}

	printf("2번 배열의 입력값을 입력하세요");
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {

			scanf_s("%d", &inputNumArr2[i][j]);
		}
	}
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			crossNum[i][j] = inputNumArr[i][j] * inputNumArr2[i][j];
			printf("%3d ", crossNum[i][j]);
		}
		printf("\n");
	}

}