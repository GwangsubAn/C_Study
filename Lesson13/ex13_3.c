#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//void assign(int a)
//{
//	//a = 20;
//	printf("assign �Լ� a : %d , %p \n", a, &a);
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
		printf("�Լ� ȣ�� �� a ��:%d\n", a);

		assign10();
		assign20();

		printf("�Լ� ȣ�� �� a ��:%d\n", a);
}