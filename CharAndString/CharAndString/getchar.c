#include <stdio.h>

int main() {
	int ch;  // 버퍼 사용
	while ((ch = getchar()) != EOF) { //파일의 끝(EOF(정수형))이 아니면 ch의 한 문자를 읽어온다
		putchar(ch); // 한 문자를 출력한다
	}
}