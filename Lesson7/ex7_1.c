#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int prime(int num);
int main()
{
	int i, cnt, num;
	cnt = 0;
	scanf("%d", &num);
	for (i = 0; i <= num; i++)
		if (prime(i))
		{
			printf("%d ", i);
			cnt++;
		}
	if (cnt == 5)
		printf("\n");
	return 0;
}

int prime(int n)
{
	int i;
	for (i = 2; i <= n; i++)
	{
		if (n % i == 0)
			return 0;
		else
			return 1;
	}
}