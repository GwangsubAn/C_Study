//#include<stdio.h>
//// �迭����� �ּҿ� �迭�� �ּ�
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
// �迭����� �ּҿ� �迭�� �ּ�
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