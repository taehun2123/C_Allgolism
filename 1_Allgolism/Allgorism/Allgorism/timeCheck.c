#include <stdio.h>
#include <time.h>

int main() {
	clock_t start, stop; //clock ticks의 자료를 담고있는 자료형, clock()의 반환형
	double duration;
	start = clock();

	for (int i = 0; i < 10000000; i++) {}

	stop = clock(); // time.h에 들어있는 함수. 
									// 프로그램에 의해 프로세서가 소비된 시간을 반환하는 함수
	duration = clock();

	printf("Start : %lf\n", (double)start);
	printf("Stop : %lf\n", (double)stop);
	duration = ((double)stop - (double)start) / CLOCKS_PER_SEC; // CLOCKS_PER_SEC - 초당 clock ticks의 수를 나타낸 매크로, 시스템에 따라 기본 값이 다름
	printf("수행시간은 %lf초 입니다.", duration);
}