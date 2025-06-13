#include<stdio.h>
#include<stdlib.h>

void main()
{
	int* pi;
	char* pc;
	double* pd;

	pi = (int*)malloc(sizeof(int));

	if (pi == NULL)
	{
		printf("메모리가 부족합니다\n");
		exit(1);
	}

	pd = (double*)malloc(sizeof(double));
	*pi = 10;
	*pd = 3.14;

	printf("pi: %d\n", *pi);
	printf("pd: %.2f\n", *pd);

	pc = (char*)malloc(10 * sizeof(char));
	if (pc == NULL)
	{
		printf("메모리가 부족합니다\n");
		exit(1);
	}
	scanf("%s", pc);
	
	printf("%s\n", *pc);

	free(pi);
	free(pd);
	free(pc);

}