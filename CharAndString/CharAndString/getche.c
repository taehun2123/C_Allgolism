#include <stdio.h>

int main() {
	int ch; //getch : ���� ��� X <-> getche : ���� ��� X (����(ǥ�õȴ�)����)
	while ((ch = _getche()) != 'q')
		_putch(ch);
}