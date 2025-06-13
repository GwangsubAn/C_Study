#include<stdio.h>

void main()
{
	int score[3][4] =
	{
		{90,89,78,98},
		{56,78,56,99},
		{89,78,90,98}
	};
	int total;
	double avg;
	int i, j;

	for (i = 0;i < 3;i++)
	{
		printf("학생의 점수를 입력하세요:");
		for (j = 0;j < 4;j++)
		{
			scanf("%d", &score[i][j]);
		}
	}
	printf("[0][1]: % p\n", &score[0][1]);
	printf("[0][3]:%p\n", &score[0][3]);
	printf("[1][0]:%p\n", &score[1][0]);
	printf("[1][3]:%p\n", &score[1][3]);
	printf("[2][0]:%p\n", &score[2][0]);
	printf("[2][3]:%p\n", &score[2][3]);









	for (i = 0;i < 3;i++)
	{
		total = 0;
		for (j = 0;j < 4;j++)
		{
			total = total + score[i][j];
		}
		avg = total / 4.0;
		printf("총점은 %d, 평균은 %.2lf\n", total, avg);

	}
}