#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int a, b; // �������� 0���� �ʱ�ȭ

void input_data(int* pa, int* pb)
{
	printf("�� �����Է�:");
	scanf("%d%d", pa, pb);
}
void swap_data()
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}
void output_data(a, b)
{
	printf("�� ���� ��� : %d %d", a, b);
}


void main()
{	
	input_data(&a, &b);
	swap_data();
	output_data(a, b);
}