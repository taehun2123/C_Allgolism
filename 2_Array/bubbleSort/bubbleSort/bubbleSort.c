#include <stdio.h>
#define SIZE 10

int main(void) {
	// 버블 정렬
	int list[SIZE] = { 3, 2, 9, 7, 1, 4, 8, 0, 6, 5 };
	int temp;
	// 내림차순
	for (int i = SIZE - 1; i > 0; i--) { //배열은 0~9까지 있으므로 SIZE-1 / 9 ~ 1이될때 까지
		for (int j = 0; j < i; j++) { //0부터 시작하여 현재 i값까지
			if (list[j] < list[j + 1]) { //처음 j는 8까지 감, 8인덱스와 9인덱스까지 비교, 나온 정렬 결과는 
			 														// 제일 마지막 인덱스에 위치하므로 다음은 7인덱스와 8인덱스까지 비교 ...
				temp = list[j]; //list[j] 값이 작다면 이를 임시저장하고
				list[j] = list[j + 1]; //list[j]값을 list[j+1] 값으로 변경
				list[j + 1] = temp; //다시 list[j+1] 값을 임시저장 값(작은 값)으로 하여 제일 작은 값은 마지막에 위치하도록 함
			}
		}
	}
	printf("정렬 출력\n");
	for (int k = 0; k < SIZE; k++) {
		printf("%d ",list[k]);
	}
}