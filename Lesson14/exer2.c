#include<stdio.h>
void main()
{
	int i, j;
	// int ary[5][6];// =
	/*{
		{1,2,3,4,5},
		{6,7,8,9,10},
		{11,12,13,14,15},
		{16,17,18,19,20}
	};*/	
	int ary[5][6] = { 0 };

	int count = 1;
	for(i=0;i<4;i++)
	{
		for (j = 0;j < 5;j++)
		{
			ary[i][j] = count++;
			//ary[4][j] = 0;
		}		
			//ary[i][5] = 0;
	}
			//ary[4][5] = 0;

	for (i = 0;i < 4;i++)
	{	
		
		for (j = 0;j < 5;j++)
		{
	
			ary[4][j] += ary[i][j];
			ary[i][5] += ary[i][j];
			ary[4][5] += ary[i][j];
		}
	}


	for (i = 0;i < 5;i++)
	{
		for (j = 0;j < 6;j++)
		{
			printf("%d\t",ary[i][j]);
		}
			printf("\n");
	}
}