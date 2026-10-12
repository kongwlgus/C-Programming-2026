#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    // [01. 유효한 점수 세 개]
    {
        int score;
        int count = 0;
        int sum = 0;

        printf("--- 1번 문제: 유효한 점수 세 개 ---\n");
        while (count < 3) {
            printf("점수 입력 (0~100, 종료:-1): ");
            scanf("%d", &score);

            if (score == -1) {
                break;
            }

            if (score < 0 || score > 100) {
                printf("잘못된 입력입니다. 0~100 사이의 점수를 입력하세요.\n");
                continue;
            }

            sum += score;
            count++;
        }

        if (count == 0) {
            printf("입력된 점수가 없습니다.\n\n");
        }
        else {
            printf("[결과] 유효한 점수 개수: %d개, 평균: %.2f\n\n", count, (float)sum / count);
        }
    }

    // [02. 같은 숫자 세 번 연속]
    {
        int current;
        int prev = -1;
        int consecutive = 0;
        int total_count = 0;

        printf("--- 2번 문제: 같은 숫자 세 번 연속 ---\n");
        printf("1~9 사이의 정수를 연속해서 입력하세요.\n");

        while (1) {
            printf("입력: ");
            scanf("%d", &current);

            total_count++;

            if (current == prev) {
                consecutive++;
            }
            else {
                prev = current;
                consecutive = 1;
            }

            if (consecutive == 3) {
                printf("[결과] 숫자 %d가 3번 연속 -> 전체 %d회 입력됨\n\n", current, total_count);
                break;
            }
        }
    }

    // [03. 속이 빈 정사각형]
    {
        int n;

        printf("--- 3번 문제: 속이 빈 정사각형 ---\n");
        printf("1~9 사이의 정수 n을 입력하세요: ");
        scanf("%d", &n);

        printf("[결과]\n");
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i == 0 || i == n - 1 || j == 0 || j == n - 1) {
                    printf("* ");
                }
                else {
                    printf("  ");
                }
            }
            printf("\n");
        }
    }

    return 0;
}