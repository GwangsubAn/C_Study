#include<stdio.h>
int main()
{
	int ary1[5] = { 1,2,3,4,5 };
	int ary2[5] = { 6,7,8,9,10 };
	int ary3[6] = { 11,12,13,14,15,16 };

	int* pary[3] = { ary1,ary2,ary3 };
	// pary[0]= 100  , ary1:100 = 1, ary1: 104 = 2, ary1:108 = 3, ary1:10B = 4, ary1:110 = 5
	// pary[1]= 200  , ary2:200 = 6, ary2: 204 = 7, ary2:208 = 8, ary2:20B = 9, ary2:210 = 10
	// pary[2]= 300  , ary3:300 = 11, ary3: 304 = 12, ary3:308 = 13, ary3:30B = 14, ary3:310 = 15
	printf("%d\n",pary[1][3]);//9
	printf("%d\n", *(pary[1]+3));//9



	for (int i = 0;i < 3;i++)
	{
		for (int j = 0;j < 6;j++)
		{
			printf("%5d", pary[i][j]);
		}
		printf("\n");
	}
}