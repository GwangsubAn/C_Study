//#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
// �Լ��� �� ���� ����
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