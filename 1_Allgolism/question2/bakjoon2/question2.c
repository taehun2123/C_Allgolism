#include <stdio.h>
#define MAX_SCORE 10

int main(void) {
	
	int score[MAX_SCORE] = { 0 };
	int sum = 0;
	double averageScore = 0;
	double average;

	for (int i = 0; i < MAX_SCORE; i++) {
		scanf_s("%d", &score[i]);
		//i가 짝수면 홀수번째 입력, 그러므로 평균 구하는 변수에 합계 처리
		if(i%2 == 0){
			averageScore += score[i];
		}
		//i가 홀수면 짝수번째 입력, 그러므로 합계 구하는 변수에 합계 처리
		else if(i%2 == 1) {
			sum += score[i];
		}
	} 
	average = (double)averageScore / (MAX_SCORE / 2); //홀수와 짝수 2개로만 나뉘어져 있으므로 전체의 나누기 2
	printf("sum : %d \n avg : %.1f", sum, average); //평균은 소수점 아래 첫째자리까지 구현
}