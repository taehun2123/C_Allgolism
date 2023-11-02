#include <stdio.h>
#include <ctype.h>
// 버퍼 사용 안하는 getch와 putch
int main(){
  int ch;
  while((ch = _getch()) != 'q'){ //맥북에서는 실행할 수 없는 현상
    _putch(ch);
  }
}