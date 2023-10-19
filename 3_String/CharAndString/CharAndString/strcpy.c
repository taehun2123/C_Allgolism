#include <stdio.h>

int main() {
	char str[4] = "abc";
	printf("%s", str);
	printf(str);
	printf("\n");

	char strng[30] = "C language is easy";

	printf("복사 전 문자\"%s\"\n", strng);
	strcpy(strng, "World"); //strng 변수에 "World" 문자열이 복사됨.
	printf("복사 된 문자\"%s\"\n", strng); //World 출력
	printf("\n");
}