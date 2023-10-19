#include <stdio.h>
#define MAX_LANG 6

int main(void) {
	char typingInput;
	char lang[MAX_LANG] = { 'J', 'U', 'N', 'G', 'O', 'L' };
	scanf(" %c", &typingInput); // 한 글자 입력받기


	int found = 0; // 찾음을 표시하는 변수 found

	for (int i = 0; i < MAX_LANG; i++) {
		if (typingInput == lang[i]) {
			printf("글자가 위치한 인덱스 값은 %d번 입니다.", i);
			found = 1;
			break;
		}
	}
	if(found == 0){
		printf("none");
	}
}