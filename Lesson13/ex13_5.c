//#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
// �������� ���� ���
int a = 10;

int func()
{
static int a ;
a++;
return a;
}

void main()
{
	int i,sum=0;
	for (i = 0; i < 10; i++)
		sum+=func();

	printf("%d\n", sum);
}