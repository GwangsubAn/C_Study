#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//void assign(int a)
//{
//	//a = 20;
//	printf("assign 함수 a : %d , %p \n", a, &a);
//}
void main()
{
	int a = 10, b=20;
	printf("변경전 값: %d ,%d\n", a, b);
	{
		//int temp,a=30,b=50;
		int temp = a;
		a = b;
		b = temp;
	//printf("임시변수 값: %d\n", temp);
	}
	printf("변경후 값: %d ,%d\n", a, b);
}