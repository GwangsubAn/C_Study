#include<stdio.h>
void sum(int num);

int main()
{
	sum(10);
	sum(100);
	return 0;
}
void sum(int x)
{
	int i;
	int result = 0;
	for (i=1; i <= x; i++)
	{
		result += i;
	}
	printf("1���� %d������ ���� %d �Դϴ�\n", x, result);	
}