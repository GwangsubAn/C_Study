#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{

	double weight, height, bmi;
	printf("몸무게(kg)와 키(cm)를 입력 : >>>");
	scanf("%lf %lf", &weight, &height);

	printf("키: %.1lf 몸무게 : %.1lf\n", weight, height);
	height /= 100;
	bmi = weight / (height * height);
	printf("bmi:%.1lf\n", bmi);

	printf("%s\n", (bmi >= 20) && (bmi < 25) ? "표준입니다" : "체중관리가 필요합니다");

	return 0;
}