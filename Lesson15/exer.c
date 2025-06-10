#include<stdio.h>

void swap(char ch[],void *pa,void *pb)
{
	if (ch == "int")
	{
		int *temp;
		temp = pa;
		pa =  pb;
		pb = temp;
	}
	else if (ch == "double")
	{
		double *temp;
		temp = pa;
		pa = pb;
		pb = temp;
	}

}

void main()
{
	int a,b;
	double x, y;

	printf("첫번째 사람의 나이와 키 입력: ");
	scanf("%d %lf", &a, &x);

	printf("두번쨰 사람의 나이와 키 입력: ");
	scanf("%d %lf", &b, &y);

	swap("int", &a, &b);
	swap("double", &x, &y);
	
	printf("첫번째 사람의 나이와 키 %d,%lf:\n",a,x);
	printf("두번째 사람의 나이와 키 %d,%lf:\n", b, y);
	
}