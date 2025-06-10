#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int a, b; // 전역변수 0으로 초기화

void input_data(int* pa, int* pb)
{
	printf("두 정수입력:");
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
	printf("두 정수 출력 : %d %d", a, b);
}


void main()
{	
	input_data(&a, &b);
	swap_data();
	output_data(a, b);
}