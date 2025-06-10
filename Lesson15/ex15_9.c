#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>

void main()
{
	int a = 10;
	double b = 3.5;
	char c = 'c';

	void* vp;
	// int* vp;
	// double* vp;


	vp = &a;
	int * pi = (double*)vp;
	printf("a: %d\n", *(int *)vp);

	printf("a: %p\n", (int*)vp);
	printf("a: %p\n", (int*)vp+1);



	vp = &b;
	printf("b: %.1lf\n", *(double*)vp);

	vp = &c;
	printf("c: %c\n", *(char*)vp);

}
