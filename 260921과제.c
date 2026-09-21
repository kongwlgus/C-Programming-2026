#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void calculateWeightedScore(void) {
	double midterm, final, assignment;
	double weighted_score;

	printf("중간고사, 기말고사, 과제 점수를 입력하세요: ");
	scanf("%lf %lf %lf", &midterm, &final, &assignment);

	weighted_score = midterm * 0.3 + final * 0.4 + assignment * 0.3;

	printf("가중 평균 점수: %.2f\n", weighted_score);
}

void calculateBMI(void) {
	double height, weight;
	double bmi;

	printf("키(m)와 몸무게(kg)를 입력하세요: ");
	scanf("%lf %lf", &height, &weight);

	bmi = weight / (height * height);

	printf("BMI: %.2f\n", bmi);
}

int main(void) {
	calculateWeightedScore();
	calculateBMI();

	return 0;
}