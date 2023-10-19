#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int main(void) {
	int i;
	int score[SIZE] = { 0 };

	for (i = 0; i < SIZE; i++) {
		score[i] = rand() % 100; //99까지의 수 중 랜덤으로 입력
	}
	for (i = 0; i < SIZE; i++) {
		printf("score[%d]=%d\n", i, score[i]);
	}

}