#include<stdio.h>
int my_sum(int a, int b)
{
	return a + b;
}
void main()
{
	int(*fp)(int, int);
	int res;
	fp = my_sum;
	res = (*fp)(100, 130);
	printf("%d\n", res);
}
