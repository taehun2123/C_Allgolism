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
		printf("%d ��° ������ �Է��ϼ���\n", i + 1);
		scanf_s("%d", &scores);
		score[i] = scores;                       
	}

	for (i = 0; i < MAX_ELEMENTS; i++) {
		printf("%d��° ������ %d\n", i + 1, score[i]);
	}

	printf("�ְ� ������ %d �Դϴ�.\n", get_max_score());

}