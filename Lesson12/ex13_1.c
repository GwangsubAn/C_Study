#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

void assign(int a)
{
	//a = 20;
	printf("assign �Լ� a : %d , %p \n", a, &a);
}
void main()
{
	int a = 0;
	assign(10);
	printf("main �Լ� a : %d %p\n", a, &a);
}