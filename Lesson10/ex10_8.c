#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void input_ary(double* pary, int size); // 배열에 데이타 입력하는 함수 원형선언
double max_arr(double* pary, int size);// 배열의 값중 가장큰 값을 반환하는 함수 원형선언
void print_arr(double* pary, int size);// 배열의 값을 출력하는 함수 원형선언


int main()
{
	int size;
	double ary[5];
	double max;

	size = sizeof(ary) / sizeof(ary[0]);
	input_ary(ary, size);

	print_arr(ary, size);

	max = max_arr(ary, size);
	printf("배열중 가장 큰 값: %.1lf\n", max);


	return 0;
}

// 배열에 데이타 입력하는 함수 구현
void input_ary(double pary[5], int size)
{
	int i;
	printf("실수 %d개 입력:",size);
	for (i = 0; i < size; i++)
	{
		//scanf("%lf", pary + i);
		scanf("%lf", &pary[i]);
	}
}

// 배열의 값중 가장큰 값을 반환하는 함수 구현
double max_arr(double* pary, int size)
{
	int i;
	double max = 0;
	for (i = 0; i < size; i++)
	{
		//if (*(pary + i) > max)
			if ((pary[i]) > max)
		//	max = *(pary + i);
		 max = pary[i];
	}
	return max;
}

// 배열의 값을 출력하는 함수 구현
void print_arr(double* pary, int size)
{
	int i;
	for (i = 0; i < size; i++)
	{
		printf("%.1lf\t", pary[i]);
	}
	printf("\n");
}

