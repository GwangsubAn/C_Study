#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//void assign(int a)
//{
//	//a = 20;
//	printf("assign 함수 a : %d , %p \n", a, &a);
//}

int a =10 ;

void assign10()
{
	a = 20;
}
void assign20()
{
	int a;
	a = 300;
}


void main()
{
		printf("함수 호출 전 a 값:%d\n", a);

		assign10();
		assign20();

		printf("함수 호출 후 a 값:%d\n", a);
}