#include <stdio.h>
#define STUDENTS 5

int main(void) {

	int score[STUDENTS] = { 0, };
	int sum = 0;
	int i, average;

	for (i = 0; i < STUDENTS; i++) {
		printf("%d번째 학생의 성적을 입력하세요 : ", i + 1);
		scanf_s("%d", &score[i]);
	}

	for (i = 0; i < STUDENTS; i++) {
		sum += score[i];
	}

	average = sum / STUDENTS;
	printf("학생들의 성적 평균은 %d입니다.\n", average);
	

}