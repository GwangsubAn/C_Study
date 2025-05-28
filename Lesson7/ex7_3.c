#include<stdio.h>

void put_char(char, int);

int main()
{
	put_char('A', 10);
	put_char('B', 10);

	return 0;
}

void put_char(char s, int n)
{
	int i;
	for (i = 0; i < n; i++)
		printf("%c", s);
	printf("\n");
	return 0;
}