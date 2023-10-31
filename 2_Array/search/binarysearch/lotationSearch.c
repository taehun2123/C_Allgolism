#include <stdio.h>
#define SIZE 10
int main(void)
{
	// 순차탐색
	int key, i;
	int list[SIZE] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	printf("찾을 수를 입력하세요");
	scanf_s("%d", &key);
	for (i = 0; i < SIZE; i++) {
		if (list[i] == key) {
			printf("검색한 수와 일치한 값이 들어있는 인덱스= %d\n", i);
			break;
		}
	}
	printf("일치하는 값을 찾을 수 없습니다.\n");
	return 0;
}