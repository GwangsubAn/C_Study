#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{

	double weight, height, bmi;
	printf("������(kg)�� Ű(cm)�� �Է� : >>>");
	scanf("%lf %lf", &weight, &height);

	printf("Ű: %.1lf ������ : %.1lf\n", weight, height);
	height /= 100;
	bmi = weight / (height * height);
	printf("bmi:%.1lf\n", bmi);

	printf("%s\n", (bmi >= 20) && (bmi < 25) ? "ǥ���Դϴ�" : "ü�߰����� �ʿ��մϴ�");

	return 0;
}