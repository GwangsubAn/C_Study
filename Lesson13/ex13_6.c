//#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
// 함수의 값 복사 전달
void add_ten(int *a)
{
	*a = *a + 100;	
}


void main()
{
	int a = 10;
	add_ten(&a);

	printf("%d\n", a);
}