#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void print_arr(int* mp); // 배열의 값을 출력하는 함수 원형선언


int main()
{
	int month[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

	print_arr(month);

	return 0;

}

void print_arr(int* mp)
{
	int i;
	for (i = 0;i < 12;i++)
	{
		printf("%5d", *(mp + i));
		if ((i % 3 == 0) && (i != 0))
			printf("\n");
	}
}
