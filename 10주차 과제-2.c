#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 100

int main()
{
	int number[SIZE];
	int temp;

	srand((unsigned int)time(NULL));

	for (int i = 0; i < SIZE; i++) {
		number[i] = (rand() % 10000) + 1;
	}

	for (int i = 0; i < SIZE - 1; i++) {
		for (int j = 0; j < SIZE - 1 - i; j++) {
			if (number[j] < number[j + 1]) {
				temp = number[j];
				number[j] = number[j + 1];
				number[j + 1] = temp;
			}
		}
	}

	for (int i = 0; i < SIZE; i++) {
		printf("%5d\t", number[i]);
		if ((i + 1) % 10 == 0) {
			printf("\n");
		}
	}

	return 0;
}
