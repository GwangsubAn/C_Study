#include<stdio.h>
int func(int n);
int poly(int n);

int main()
{
	printf("%d", func(-3));
	return 0;
}

int func(int x)
{
	int res;
	res = poly(x);
	if (res >= 0) return res;
	else return -res;
}

int poly(int x)
{
	return ((2 * x * x) + (3 * x));
}