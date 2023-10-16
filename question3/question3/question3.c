#include <stdio.h>
#define MAX_LANG 10

int main(void) {

	char lang[MAX_LANG] = { 0 };

	for (int i = 0; i < MAX_LANG; i++) {
		scanf_s(" %c", &lang[i]);
	}
	for (int j = MAX_LANG -1; j >= 0; j--) {
		printf("%c ", lang[j]);
	}

}