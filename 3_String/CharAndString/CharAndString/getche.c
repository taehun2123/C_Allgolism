#include <stdio.h>

int main() {
	int ch; //getch : 버퍼 사용 X - 출력하는 것만 보임 <-> getche : 버퍼 사용 X (그 대신 에코를 사용함 - 입력하는 것도 보임)
	while ((ch = _getche()) != 'q')
		_putch(ch);
}