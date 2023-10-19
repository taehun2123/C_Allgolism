#include <stdio.h>
#define MAX_NUM 100

int main(void) {
	int max_i = 0;
	int num[MAX_NUM] = { 0 };
	int i;
	for (i = 0; i < MAX_NUM; i++) {
		scanf("%d", &num[i]);
		if (num[i] == 0) { //0을 입력받으면
			max_i = i; //현재의 i값을 max_i 변수에 저장
			break; // 반복문 빠져나가기
		}
	}
	for (int j = max_i - 1; j >= 0; j--) { //거꾸로 출력
		printf("%d ", num[j]);
	}
}