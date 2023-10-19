#include <stdio.h>

int main() {
	int ch;  // int해도되고, char해도 됨. 아스키코드는 숫자로 취급하기 때문. char도 숫자로 변환하여 인식함.
	while ((ch = getchar()) != EOF) { //End Of File을 나타내는 문자, EOF는 정수형임. / 한 문자를 읽어서 반환한다.
		putchar(ch); // 변수에 저장된 문자를 출력한다.
	}
}