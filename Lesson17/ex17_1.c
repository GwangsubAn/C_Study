#include<stdio.h>
#include<string.h>


int main()
{
	int res;
	char ch;
	while (1)
	{
		res = scanf("%c",&ch);
		if (res == -1) break;
		printf("%c", ch);
	}

	return 0;
}