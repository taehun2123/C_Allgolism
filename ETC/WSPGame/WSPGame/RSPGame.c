#include <stdio.h>
int player;
int player2;

int main() {
	printf("�÷��̾� 1 : 3 = ����, 1 = ����, 2 = �� �� �����ϼ���");
	scanf_s("%d\n", &player);

	printf("�÷��̾� 2 : 4 = ����, 5 = ����, 6 = �� �� �����ϼ���");
	scanf_s("%d\n", &player2);

	printf("�÷��̾� 1�� �� �� %d, �÷��̾� 2�� �� �� %d", player, player2);

}