#include<stdio.h>

void main()
{
	int score[][4] =
	{
		{1},
		{5,6,},
		{9,10,11},
		{ 0,0 ,15,16}
	};
	int cnt = sizeof(score) / sizeof(score[1]);
	printf("%d\n", cnt);

	int i, j;
	for (i = 0;i < 4;i++)
	{
		for (j = 0;j < 4;j++)
		{
			printf("%d\t", score[i][j]);
		}
		printf("\n");
	}
}