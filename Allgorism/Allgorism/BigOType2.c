#include <stdio.h>

void printProve(int arr[], int n) {
	for (int i = 0; i < n; i++) 
	{ 
		for (int k = 0; k < n; k++) {
			printf("i = %d, k = %d ---> %d\t", i, k, i+k);
		}
		printf("\n");
	}
}


int main() {
	int arr[5] = { 0 };

	for (int i = 0; i < 5; i++) {
		arr[i] = i;
	}

	printProve(arr, 5);
}