#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 100

void swap(int* a, int* b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int number[], int size) {
    int most;
    for (int i = 0; i < size; i++) {
        most = i;
        for (int j = i + 1; j < size; j++) {
            if (number[most] < number[j]) {
                most = j;
            }
        }
        swap(&number[i], &number[most]);
    }
}

int main() {
    int number[SIZE] = { 0 };
    srand(time(NULL));

    for (int i = 0; i < SIZE; i++) {
        number[i] = (rand() % 10000) + 1;
    }

    selectionSort(number, SIZE);

 
    for (int i = 0; i < SIZE; i++) {
        printf("%5d\t", number[i]);
        if ((i + 1) % 10 == 0) printf("\n");
    }

    return 0;
}