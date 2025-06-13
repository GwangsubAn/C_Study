#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
extern int count;
int total = 0;
void input_data(coid)
{
	while (1)
	{

		int pos;
		printf("양의정수 입력: ");
		scanf("%d", &pos);
		if (pos < 0) break;
		count++;
		total += pos;
	}
	return total;
}