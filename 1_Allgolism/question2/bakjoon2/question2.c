#include <stdio.h>
#define MAX_SCORE 10

int main(void) {
	
	int score[MAX_SCORE] = { 0 };
	int sum = 0;
	double averageScore = 0;
	double average;

	for (int i = 0; i < MAX_SCORE; i++) {
		scanf_s("%d", &score[i]);
		//Ȧ����° �Էµ� ���� ����� ���ϱ� ���� ����
		if(i%2 == 0){
			averageScore += score[i];
		}
		// ¦����° �Էµ� ���� ���� ���ϱ� ���� ����
		else if(i%2 == 1) {
			sum += score[i];
		}
	} 
	average = averageScore / (MAX_SCORE / 2); //��� ���
	printf("sum : %d \n avg : %.1f", sum, average); //�ݿø� �Ҽ� ù°�ڸ�
}