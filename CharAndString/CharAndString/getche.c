#include <stdio.h>

int main() {
	int ch; //getch : 버퍼 사용 X <-> getche : 버퍼 사용 X (에코(표시된다)여부)
	while ((ch = _getche()) != 'q')
		_putch(ch);
}