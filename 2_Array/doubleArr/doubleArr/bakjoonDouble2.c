#include <stdio.h>
#define ROWS 2
#define COLS 4

int main() {
	int inputNumArr[ROWS][COLS] = { 0 };
	int inputNumArr2[ROWS][COLS] = { 0 };
	int crossNum[ROWS][COLS] = {0};

	printf("첫번째 배열의 입력 값을 삽입하세요");
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			scanf("%d", &inputNumArr[i][j]);
		}
	}

	printf("두 번째 배열의 입력 값을 삽입하세요");
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {

			scanf("%d", &inputNumArr2[i][j]);
		}
	}
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			crossNum[i][j] = inputNumArr[i][j] * inputNumArr2[i][j];
			printf("%2d ", crossNum[i][j]);
		}
		printf("\n");
	}

}