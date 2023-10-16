#include <stdio.h>
#define ROWS 3
#define COLS 5
int main() {
	int arr[ROWS][COLS] = {
		{5,8,10,6,4},
		{11,20,1,13,2},
		{7,9,14,22,3}
	};

	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			printf("%2d   ", arr[i][j]);
		}
		printf("\n");
	}
}