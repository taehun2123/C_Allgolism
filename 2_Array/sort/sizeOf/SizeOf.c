#include <stdio.h>
#define SIZE 10
int main(void) {
	/*
	printf("int는 %d\n", sizeof(int)); //4
	printf("char은 %d\n", sizeof(char)); //1
	printf("float는 %d\n", sizeof(float)); //4
	printf("double은 %d\n", sizeof(double)); //8
	*/

	/*-------------------------------*/
	// 선택 정렬 시작
	int list[SIZE] = { 3, 2, 9, 7, 1, 4, 2, 5, 0 ,2 };
	int i, j, temp, lowValue;

	for (i = 0; i < SIZE - 1; i++) {
		lowValue = i;
			// 작은 값 찾기
			for (j = i + 1; j < SIZE; j++) {
				if (list[j] < list[lowValue]) {
					lowValue = j;
				}
			}
			//작은 값을 list[i]에 저장,
			//일단 현재 작은 값을 temp 값으로 지정
			//이후 다시 찾기 과정으로 반복
			temp = list[i];
			list[i] = list[lowValue];
			list[lowValue] = temp;
	}

	for (i = 0; i < SIZE; i++) {
		printf("%d ", list[i]);
	}
}                                                                                                           