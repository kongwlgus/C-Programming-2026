#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10 

int main()
{
    int number[SIZE];
    int sum = 0;
    int max, min;

    srand((unsigned int)time(NULL));
    for (int i = 0; i < SIZE; i++) {
        number[i] = rand() % 101;
    }

    printf("=== 학생별 점수 목록 (총 %d명) ===\n", SIZE);
    for (int i = 0; i < SIZE; i++) {
        if (i > 0 && i % 10 == 0) printf("\n");
        printf("[%2d번]:%3d점  ", i + 1, number[i]);
    }
    printf("\n\n");

    max = number[0];
    min = number[0];
    sum = number[0];

    for (int i = 1; i < SIZE; i++) {
        if (number[i] > max) {
            max = number[i];
        }
        if (number[i] < min) {
            min = number[i];
        }
        sum += number[i];
    }

    double average = (double)sum / SIZE;

    printf("=== 성적 통계 결과 ===\n");
    printf("• 최댓값 : %d점\n", max);
    printf("• 최솟값 : %d점\n", min);
    printf("• 평  균 : %.2f점\n", average);

    return 0;
}
