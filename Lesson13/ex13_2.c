#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//void assign(int a)
//{
//	//a = 20;
//	printf("assign �Լ� a : %d , %p \n", a, &a);
//}
void main()
{
	int a = 10, b=20;
	printf("������ ��: %d ,%d\n", a, b);
	{
		//int temp,a=30,b=50;
		int temp = a;
		a = b;
		b = temp;
	//printf("�ӽú��� ��: %d\n", temp);
	}
	printf("������ ��: %d ,%d\n", a, b);
}