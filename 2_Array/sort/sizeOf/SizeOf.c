#include <stdio.h>
#define SIZE 10
int main(void) {
	/*
	printf("int�� %d\n", sizeof(int)); //4
	printf("char�� %d\n", sizeof(char)); //1
	printf("float�� %d\n", sizeof(float)); //4
	printf("double�� %d\n", sizeof(double)); //8
	*/

	/*-------------------------------*/
	// ���� ���� ����
	int list[SIZE] = { 3, 2, 9, 7, 1, 4, 2, 5, 0 ,2 };
	int i, j, temp, lowValue;

	for (i = 0; i < SIZE - 1; i++) {
		lowValue = i;
			// ���� �� ã��
			for (j = i + 1; j < SIZE; j++) {
				if (list[j] < list[lowValue]) {
					lowValue = j;
				}
			}
			//���� ���� list[i]�� ����,
			//�ϴ� ���� ���� ���� temp ������ ����
			//���� �ٽ� ã�� �������� �ݺ�
			temp = list[i];
			list[i] = list[lowValue];
			list[lowValue] = temp;
	}

	for (i = 0; i < SIZE; i++) {
		printf("%d ", list[i]);
	}
}                                                                                                           