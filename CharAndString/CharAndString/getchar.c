#include <stdio.h>

int main() {
	int ch;  // ���� ���
	while ((ch = getchar()) != EOF) { //������ ��(EOF(������))�� �ƴϸ� ch�� �� ���ڸ� �о�´�
		putchar(ch); // �� ���ڸ� ����Ѵ�
	}
}