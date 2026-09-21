#include <stdio.h>
#define READ 0x01
#define WRITE 0x02
#define EXEC 0x04
#pragma warning(disable:4996)

void exercise1(void) {
    double inches, cm;
    scanf("%lf", &inches);
    cm = inches * 2.54;
    printf("%.2f inches is %.2f cm.\n", inches, cm);
}

void exercise2(void) {
	double F, C;
	scanf("%lf", &F);
	C = (F - 32) * 5 / 9;
	printf("%.2f F is %.2f C.\n", F, C);
}

void exercise3(void) {
    double r, area;
	scanf("%lf", &r);
    printf("반지름을 입력하세요.");
    area = 3.14 * r * r;
    printf("원의 둘레는 %.2f is %.2f.\n", r, area);
}

void exercise4(void) {
    int total = 7384;

    int hours = total / 3600;
    int minutes = (total % 3600) / 60;
    int seconds = total % 60;

	printf("결과: %d시간 %d분 %d초\n", hours, minutes, seconds);
}

void exercise5(void) {
    int score = 75;
    int attendance = 85;
    int passed = score >= 60 && attendance >= 80;
}

void exercise6(void){
	unsigned int permissions = READ | WRITE;

	permissions |= EXEC;

}
void exercise7(void) {
    int amount;
	scanf("%d", &amount);

    int won10000 = amount / 10000;
    amount %= 10000;
    int won1000 = amount / 1000;
    amount %= 1000;
    int won100 = amount / 100;
    amount %= 100;
    int won10 = amount / 10;

	printf("10000:%d 1000:%d 100:%d 10:%d\n", won10000, won1000, won100, won10);
    return 0;
}

void exercise8(void) {
    int year;
    scanf("%d", &year);

    int is_leap = (year % 4 == 0) && (year % 100 != 0 || year % 400 == 0);

    printf("%d\n", is_leap);
    return 0;
}

int main()
 {
		exercise1();
		exercise2();
		exercise3();
		exercise4();
		exercise5();
        exercise6();
        exercise7();
        exercise8();
		return 0;
}
/*
{
    double inches, cm;
    double F, C;
    double r, areas;

    scanf("%lf", &inches);
    cm = inches * 2.54;
	printf("%.2f inches is %.2f cm.\n", inches, cm);
 
	scanf("%lf", &F);
	C = (F - 32) * 5 / 9;
	printf("%.2f F is %.2f C.\n", F, C);

	scanf("%lf", &r);
    areas = 3.14 * r * r;
    printf("The area of a circle with radius %.2f is %.2f.\n", r, areas);

    return 0;
}
*/