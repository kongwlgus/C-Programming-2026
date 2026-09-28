#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void exerc5(void) {
	int player1, player2;

	printf("input player1 : ");
	scanf("%d", &player1);
	printf("input player2 : ");
	scanf("%d", &player2);

	if (player1 == player2) printf("tie");
	else if (player1 == 1) {
		if (player2 == 2) printf("p2 wins");
		else printf("p1 wins");
	}else if(player1 == 2) {
		if (player2 == 3) printf("p2 wins");
		else printf("p1 wins");
	}else if(player1 == 3) {
		if (player2 == 1) printf("p2 wins");
		else printf("p1 wins");
	}
}

int main(void) {
	exerc5();
	return 0;
}