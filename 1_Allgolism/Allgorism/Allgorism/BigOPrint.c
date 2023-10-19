#include <stdio.h>
#include <stdbool.h>
#define INDEX 5
bool isArrayZero(int arr[])
{
	return (arr[0] == 0) ? true : false;
}

int main() {
	//입력 data의 크기에 상관없이 항상 일정한 시간 소요
	int arr[INDEX] = { 0 };
	bool result;

	for (int i = 0; i < INDEX; i++) {
		arr[i] = i;
	}

	result = isArrayZero(arr);

	printf("결과는 %s, arr[0] = %d", result == 1 ? "TRUE" : "FALSE", arr[0]);

}