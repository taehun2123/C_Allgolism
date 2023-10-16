#include <stdio.h>

int main() {
	char str[4] = "abc";
	printf("%s", str);
	printf(str);
	printf("\n");

	char strng[30] = "C language is easy";

	printf("문자열\"%s\"\n", strng);
	strcpy(strng, "World"); //strng을 "World"라는 문자열로 바꿔라
	printf("문자열\"%s\"\n", strng);
	printf("\n");
}