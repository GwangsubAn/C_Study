//#include<stdio.h>
//// 배열요소의 주소와 배열의 주소
//void main()
//{
//	int ary[3][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };
//
//	int(*pa)[4];
//	int i, j;
//	pa = ary;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; i < 4; j++)
//		{
//			printf("%5d", pa[i][j]);
//		}
//		printf("\n");
//	}
//
//}

#include<stdio.h>
// 배열요소의 주소와 배열의 주소
void main()
{
	int ary[3][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };

	int(*pa)[4];
	int i, j;
	pa = ary;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%5d", pa[i][j]);
		}
		printf("\n");
	}

}