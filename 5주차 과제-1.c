#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int isleafyear(int year) {
	int isleaf = 0;

	if (year % 4 == 0){
		if (year % 100 == 0){
			if (year % 400 == 0){
				isleaf = 1;
			}
		}else{
			isleaf = 1;
		}
	}
	return isleaf;
}
void exerc3(void) {
	int year, leafyear;

	printf("input year : ");
	scanf("%d", &year);

	if(isleafyear(year) == 1) printf("À±³âÀÔ´Ï´Ù.");
	else printf("Æò³âÀÔ´Ï´Ù.");
}
int main(void)
{
    exerc3();
    return 0;
}
