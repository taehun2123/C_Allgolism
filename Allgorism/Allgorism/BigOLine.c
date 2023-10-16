#include <stdio.h>

void printProve(int arr[]) {
	for (int i = 0; i < 5; i++) {
		printf("arr[%d] = %d\n", i, arr[i]);
	}
}


int main() {
	int arr[5] = { 0 };

	for (int i = 0; i < 5; i++) {
		arr[i] = i;
	}

	printProve(arr);
}