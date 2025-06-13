//#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
// 레지스터 변수 사용
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