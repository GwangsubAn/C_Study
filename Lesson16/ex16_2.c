#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int* pi;
	int i, sum = 0;

	pi = (int*)malloc(5 * sizeof(int));

	if (pi == NULL)
	{
		printf("메모리가 부족합니다\n");
		exit(1);
	}

	printf("다섯명의 나이를 입력하세요 : ");
	for (i = 0;i < 5;i++)
	{
		//scanf("%d", pi +i);
		scanf("%d", &pi[i]);

		sum += *(pi + i);
	}
	printf("다섯명 나이의 평균 : %.1f\n", sum / 5.f);

	free(pi);
	return 0;
}