#include <stdio.h>
#define ROWS 3
#define COLS 5
void interfaceScore(int studentScore[ROWS][COLS]) { //�޼ҵ� �и�
	double sum[ROWS] = { 0 };

	for (int i = 0; i < ROWS; i++) {
		sum[i] = studentScore[i][0] * 0.3 + studentScore[i][1] * 0.4 + studentScore[i][2] * 0.2 + studentScore[i][3] * 0.1 - studentScore[i][4];
		printf("�л� %d�� ���� ������ : %10.2f\n", i + 1, sum[i]); // %10.2f => �Ҽ����� �������� �� ��, 2ĭ�� ���
	}
}

int main() {
	int studentScore[ROWS][COLS] = {
		{87, 98, 80, 76, 3},
		{99, 89, 90, 90, 0},
		{65, 68, 50, 49, 0},
	};
	/*
	double sum[ROWS] = { 0 };

	for (int i = 0; i < ROWS; i++) {
		sum[i] = studentScore[i][0] * 0.3 + studentScore[i][1] * 0.4 + studentScore[i][2] * 0.2 + studentScore[i][3] * 0.1 - studentScore[i][4];
		printf("�л� %d�� ���� ������ : %10.2f\n", i+1, sum[i]); // %10.2f => �Ҽ����� �������� �� ��, 2ĭ�� ���
	}
	*/
	interfaceScore(studentScore);
}