#include<stdio.h>
int main()
{
	int a = 100, b = 400,total;
	double avg;

	int* pa, * pb;

	int* pt = &total;
	double* pg = &avg;
	
	pa = &a;
	pb = &b;

	*pt = *pa + *pb;
	*pg = *pt / 2.0;

	printf("%d %d\n", *pa, *pb);
	printf("%d\n", *pt);
	printf("%.2lf\n", *pg);

	return 0;
}