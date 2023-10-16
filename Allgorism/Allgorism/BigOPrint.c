#include <stdio.h>
#include <stdbool.h>
#define INDEX 5
bool isArrayZero(int arr[])
{
	return (arr[0] == 0) ? true : false;
}

int main() {
	int arr[INDEX] = { 0 };
	bool result;

	for (int i = 0; i < INDEX; i++) {
		arr[i] = i;
	}

	result = isArrayZero(arr);

	printf("°á°ú´Â %s, arr[0] = %d", result == 1 ? "TRUE" : "FALSE", arr[0]);

}