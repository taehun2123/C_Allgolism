#include <stdio.h>

int main() {
	char str[30] = "C Language is easy";
	int i = 0;

	while (str[i] != 0) { // null�� �ƽ�Ű �ڵ� ���� 0�̹Ƿ� '\0',NULL, 0 ��� ���� 
		i++;
	}
	printf("���ڿ� %s�� ���̴� %d�Դϴ�.", str, i);
}