#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int main(void) {
	int i;
	int score[SIZE] = { 0 };

	for (i = 0; i < SIZE; i++) {
		score[i] = rand() % 100; //99±îÁö¸¸ ³ª¿È
	}
	for (i = 0; i < SIZE; i++) {
		printf("score[%d]=%d\n", i, score[i]);
	}

}