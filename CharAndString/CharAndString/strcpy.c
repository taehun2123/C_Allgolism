#include <stdio.h>

int main() {
	char str[4] = "abc";
	printf("%s", str);
	printf(str);
	printf("\n");

	char strng[30] = "C language is easy";

	printf("���ڿ�\"%s\"\n", strng);
	strcpy(strng, "World"); //strng�� "World"��� ���ڿ��� �ٲ��
	printf("���ڿ�\"%s\"\n", strng);
	printf("\n");
}