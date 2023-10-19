#include <stdio.h>
#define SIZE 10
int search(int list[], int size, int key);
int main() {
	int list[SIZE] = { 2, 6, 11, 13, 18, 20, 22, 27, 29, 30 };
	int key = 0;
	printf("Ž���� ���� �Է��ϼ���");
	scanf_s("%d", &key);
	printf("Ž�� ��� = �ε��� ��ġ %d\n", search(list, SIZE, key));
}

int search(int list[], int size, int key) {

	int low = 0;
	int high = size - 1;
	int middle = 0;

	while (low <= high) {
		printf("[ %d, %d ]\n", low, high);
		middle = (low + high) / 2;
		if (key == list[middle]) {
			return middle;
		}
		else if(key > list[middle]){
			low = middle + 1;
		}
		else {
			high = middle - 1;
		}
	}
	return -1;
}