#include <stdio.h>
#include <time.h>

int main() {
	clock_t start, stop;
	double duration;
	start = clock();

	for (int i = 0; i < 10000000; i++) {}

	stop = clock();
	duration = clock();

	printf("Start : %lf\n", (double)start);
	printf("Stop : %lf\n", (double)stop);
	duration = ((double)stop - (double)start) / CLOCKS_PER_SEC;
	printf("수행시간은 %lf초입니다.", duration);
}