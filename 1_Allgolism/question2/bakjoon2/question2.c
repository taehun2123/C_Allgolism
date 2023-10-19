#include <stdio.h>
#define MAX_SCORE 10

int main(void) {
	
	int score[MAX_SCORE] = { 0 };
	int sum = 0;
	double averageScore = 0;
	double average;

	for (int i = 0; i < MAX_SCORE; i++) {
		scanf_s("%d", &score[i]);
		//홀수번째 입력된 값의 평균을 구하기 위한 조건
		if(i%2 == 0){
			averageScore += score[i];
		}
		// 짝수번째 입력된 값의 합을 구하기 위한 조건
		else if(i%2 == 1) {
			sum += score[i];
		}
	} 
	average = averageScore / (MAX_SCORE / 2); //평균 계산
	printf("sum : %d \n avg : %.1f", sum, average); //반올림 소수 첫째자리
}