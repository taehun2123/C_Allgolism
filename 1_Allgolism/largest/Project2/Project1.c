#include <stdio.h>
#define MAX_ELEMENTS 10
int score[MAX_ELEMENTS];

int get_max_score() {
	int i, largest;
	largest = score[0];
	for (i = 0; i < MAX_ELEMENTS; i++) {
		if (score[i] > largest) {
			largest = score[i];
		}
	}
	return largest;
}

int main(void)
{
	int i, scores;


	for (i = 0; i < MAX_ELEMENTS; i++) {
		printf("%d 번째 학생의 점수를 입력하세요\n", i + 1);
		scanf_s("%d", &scores);
		score[i] = scores;                       
	}

	for (i = 0; i < MAX_ELEMENTS; i++) {
		printf("%d번째 학생의 점수 = %d\n", i + 1, score[i]);
	}

	printf("학생들 중 가장 높은 점수는 %d 입니다.\n", get_max_score());

}