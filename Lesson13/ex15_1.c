#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>

void disp_ary(int* pary)
{
	int i, j;
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 5; j++)
		{
			//printf("%d\t", *pary[i]);
		}
		printf("\n");
	}
}
void main()
{
	int i, j;
	int ary[5][6];
	int count = 1;

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 5; j++)
		{
			ary[i][j] = count++;
			ary[i][5] = 0;
			ary[4][j] = 0;
		}
	}
		ary[4][j] = 0;

		for (i = 0; i < 4; i++)
		{
			for (j = 0; j < 5; j++)
			{
				ary[i][5] += ary[i][j];
				ary[4][j] += ary[i][j];
				ary[4][5] += ary[i][j];
			}
		}

		for (i = 0; i < 5; i++)
		{
			for (j = 0; j < 6; j++)
			{
				printf("%d\t", ary[i][j]);
			}
			printf("\n");
		}

		int* pa; //가르키는 자료형이 int형이고 자신은 int* 형

}

