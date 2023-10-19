#include <stdio.h>
#define SIZE 10
int search(int list[], int size, int key);
int main() {
	// 이진 탐색(먼저 정렬 되어 있어야함)
	int list[SIZE] = { 2, 6, 11, 13, 18, 20, 22, 27, 29, 30 };
	int key = 0;
	printf("탐색할 수를 입력하세요");
	scanf_s("%d", &key);
	printf("탐색 결과 인덱스 값 = %d\n", search(list, SIZE, key));
}

int search(int list[], int size, int key) {

	int low = 0;
	int high = size - 1; //배열은 0~9까지만 지정되어 있으므로
	int middle = 0;

	while (low <= high) { //가장 작은 인덱스의 값이 큰 인덱스의 값과 작거나 같을 때 까지
		printf("[ %d, %d ]\n", low, high); //현재 low 값과 high값 출력
		middle = (low + high) / 2; //middle은 high와 low의 중간 값
		if (key == list[middle]) { //찾을 값이랑 middle 인덱스에 들어있는 값과 같을 때
			return middle; //middle을 반환함 - 종료
		}
		else if(key > list[middle]){ // 찾을 값이 middle 인덱스 값보다 크다면?
			low = middle + 1; //low값을 middle 값보다 1 높인다.
		}
		else {
			high = middle - 1; //아니라면? 찾을 값이 middle 인덱스 값보다 작다는 말이므로
													// high값을 middle 값보다 1 감소시킨다.
		}
	}
	return -1;
}