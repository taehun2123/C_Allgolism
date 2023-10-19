#include <stdio.h>

int main() {
	int temp = 0;
	int inputNum = 0;
	int list[20] = { 0 };

	//정수 입력
	scanf("%d", &inputNum); // 몇 명의 점수를 입력받을 것인지
	for (int i = 0; i < inputNum; i++) {
		scanf("%d", &list[i]); //i번째 사람의 점수 입력
	}

	//버블 정렬
	for (int k = inputNum-1; k > 0; k--) {
		for (int j = 0; j < k; j++) {
			if (list[j] < list[j + 1]) { //내림차순
				temp = list[j];
				list[j] = list[j + 1];
				list[j + 1] = temp;
			}
		}
	}

	// 결과 출력
	for (int m = 0; m < inputNum; m++) {
		printf("%d ", list[m]);
	}
}