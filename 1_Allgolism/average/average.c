#include <stdio.h>
#define STUDENTS 5

int main(void) {

	int score[STUDENTS] = { 0, };
	int sum = 0;
	int i;
	double average;

	for (i = 0; i < STUDENTS; i++) {
		printf("%d번째 학생의 성적을 입력하세요 : ", i + 1);
		scanf("%d", &score[i]);
	}

	for (i = 0; i < STUDENTS; i++) {
		sum += score[i];
	}

	average = (double)sum / STUDENTS;
	printf("학생들의 전체 평균 점수는 %.2f점입니다.\n", average);
	

}