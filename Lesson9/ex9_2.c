#include<stdio.h>
int main()
{

	int a=10;
	int* pa;
	pa = &a;
	printf("������ ������ a ��:%d\n", *pa);
	printf("���������� a ��:%d\n", a);
	return 0;
}