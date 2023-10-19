#include <stdio.h>
#define SIZE 10
int main(void) {
	/*
	printf("int�� %d\n", sizeof(int)); //4
	printf("char�� %d\n", sizeof(char)); //1
	printf("float�� %d\n", sizeof(float)); //4
	printf("double�� %d\n", sizeof(double)); //8
	*/

	/*-------------------------------*/
	// 선택 정렬
	int list[SIZE] = { 3, 2, 9, 7, 1, 4, 2, 5, 0 ,2 };
	int i, j, temp, lowValue;

	for (i = 0; i < SIZE - 1; i++) {
		lowValue = i; //현재의 i값을 가장 낮은 값으로 임의 선정
			for (j = i + 1; j < SIZE; j++) { 
				//현재 i(lowValue) 값과 i+1값과 대소비교 
				if (list[j] < list[lowValue]) { //만약 j가 lowvalue값보다 작으면?
					lowValue = j; //lowValue를 j로 지정
				}
			}
			//한 스탭이 끝나면 현재의 list[i]의 값을 temp변수에 임시저장
			//list[i]에 lowValue인덱스 값 저장
			//lowValue인덱스에는 저장했던 temp값 삽입 후 
			temp = list[i];
			list[i] = list[lowValue]; //가장 작은 값 lowValue를 현재 list[i]에 저장(고정)
			list[lowValue] = temp; //list[lowvalue]에는 다시 이전의 list[i] 값 넣어서 대소비교 실시
	}

	for (i = 0; i < SIZE; i++) {
		printf("%d ", list[i]);
	}
}                                                                                                           