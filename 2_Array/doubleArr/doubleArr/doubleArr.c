#include <stdio.h>
#include <stdlib.h>
#define ROWS 3
#define COLS 5

int main() {
	int randNum[ROWS][COLS] = { 0 };
	int i = 0;
	int j = 0;

	for (i = 0; i < ROWS; i++) {
		for ( j = 0; j < COLS; j++)
		{
			randNum[i][j] = rand() % 100; // 0~99까지 랜덤으로 입력됨
			printf(" %2d", randNum[i][j]); //2자리 정수까지만 출력됨
		}
		printf("\n");
	}
}