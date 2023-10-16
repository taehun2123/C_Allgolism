#include <stdio.h>

int main() {
	char str[30] = "C Language is easy";
	int i = 0;

	while (str[i] != 0) { // null의 아스키 코드 값은 0이므로 '\0',NULL, 0 모두 가능 
		i++;
	}
	printf("문자열 %s의 길이는 %d입니다.", str, i);
}