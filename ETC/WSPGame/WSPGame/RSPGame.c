#include <stdio.h>
int player;
int player2;

int main() {
	printf("플레이어 1 : 3 = 가위, 1 = 바위, 2 = 보 중 선택하세요");
	scanf_s("%d\n", &player);

	printf("플레이어 2 : 4 = 가위, 5 = 바위, 6 = 보 중 선택하세요");
	scanf_s("%d\n", &player2);

	printf("플레이어 1이 낸 값 %d, 플레이어 2가 낸 값 %d", player, player2);

}