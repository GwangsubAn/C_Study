#include<stdio.h>
void main()
{
	int a = 10;
	
	int* pa;
	pa = &a;
	
	int** ppa;
	ppa = &pa;

	printf("����           ��                   &����                *����           **����\n");
	printf("  a %20d %20p\n",a,&a);
	printf(" pa %20p %20p %20d\n", pa, &pa, *pa);
	printf("ppa %20p %20p %20p %10d\n", ppa, &ppa, *ppa, **ppa);




}