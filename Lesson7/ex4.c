#include<stdio.h>
int sum_func(int num);

int main()
{
	int result = sum_func(100);
	printf("%d", result);
	return 0;
}

int sum_func(int n)
{
	if (n == 1)
		return 1;
	else
		return n + sum_func(n - 1);
}
