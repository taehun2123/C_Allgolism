#include <stdio.h>
#define MAX_LANG 6

int main(void) {
	char typingInput;
	char lang[MAX_LANG] = { 'J', 'U', 'N', 'G', 'O', 'L' };
	scanf_s(" %c", &typingInput, 1); // 크기를 몇 개 받겠다 선언해줘야함


	int found = 0; // 일치하는 값 확인하는 변수

	for (int i = 0; i < MAX_LANG; i++) {
		if (typingInput == lang[i]) {
			printf("%d", i);
			found = 1;
			break;
		}
	}
	if(found == 0){
		printf("none");
	}
}