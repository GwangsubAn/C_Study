
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

struct cracker
{
	int price;
	int calories;
};

int main()
{
	struct cracker ace;

	printf("ace�� ���ݰ� ������ �Է�:");
	scanf("%d%d", &ace.price, &ace.price);

	printf("ace�� ����: %d\n",ace.price);
	printf("ace�� ����: %d\n", ace.calories);

	return 0;
}