#include<stdio.h>
void main()
{
	int ary[5] = { 10,20,30,40,50 };
	void* vp = ary;

	printf("%d\n",((int*)vp)[2]);
}