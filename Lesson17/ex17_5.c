
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

	printf("ace의 가격과 열량을 입력:");
	scanf("%d%d", &ace.price, &ace.price);

	printf("ace의 가격: %d\n",ace.price);
	printf("ace의 열량: %d\n", ace.calories);

	return 0;
}