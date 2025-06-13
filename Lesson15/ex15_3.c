#include<stdio.h>

void print_ary(char** pps, int cnt)
{
	int i;
	for (i = 0; i < cnt; i++)
	{
		printf("%s\n", pps[i]);
	}
}

void main()
{
	//char* ptr_ary[] = { "e" };
	char* ptr_ary[] = { "eagle","tiger","loin","squirrel","whale"};

	int count;

	count = sizeof(ptr_ary) / sizeof(ptr_ary[0]);
	print_ary(ptr_ary, count);
}


