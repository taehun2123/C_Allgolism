#include <stdio.h>
#define STUDENTS 5

int main(void) {

	int score[STUDENTS] = { 0, };
	int sum = 0;
	int i, average;

	for (i = 0; i < STUDENTS; i++) {
		printf("%d��° �л��� ������ �Է��ϼ��� : ", i + 1);
		scanf_s("%d", &score[i]);
	}

	for (i = 0; i < STUDENTS; i++) {
		sum += score[i];
	}

	average = sum / STUDENTS;
	printf("�л����� ���� ����� %d�Դϴ�.\n", average);
	

}