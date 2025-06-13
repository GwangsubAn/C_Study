#include<stdio.h>
void main()
{

	char mark[5][5] = { 0 };
	int count = sizeof(mark) / sizeof(mark[0]);
	int i, j;
	for (i = 0;i < count;i++)
	{
		for (j = 0;j < 5;j++)
		{
			if ((i==j) ||(i == (4-j))) mark[i][j] = 'x';
		}
	}

	for (i = 0;i < count;i++)
	{
		for (j = 0;j < 5;j++)
		{
			printf("%c  ", mark[i][j]);
		}
		printf("\n");
	}

}