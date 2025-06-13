#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
void check_pi(int* pi)
{
	if (pi == NULL)
	{
		printf("메모리가 부족\n");
		exit(1);
	}
}
int main(void)
{
	int size = 5;
	int* pi;
	int num;

	int i;
	int count = 0;
	pi = (int*)calloc(size, sizeof(int));
	check_pi(pi);
	double* weight = (double*)malloc(sizeof(double));
	int *scores = (int*)malloc(10*sizeof(int));
	char* string = (char*)malloc(80 * sizeof(char));


	
	while (1)
	{
		printf("양수만 입력하세요: ");
		scanf("%d", &num);
		if (num < 0) break;
		if (count == size)
		{
			size += 5;
			pi = (int*)realloc(pi, size * sizeof(int));
			check_pi(pi);

		}
		//*(pi+count++) = num;
		pi[count++] = num;

		//count++;
	}

	for (i = 0;i < count;i++)
	{
		//printf("%d ",*(pi+i) );
		printf("%d ", pi[i]);

	}

	free(pi);


		return 0;
}
