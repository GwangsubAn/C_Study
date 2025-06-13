#include<stdio.h>

void 	print_ary(int cnt,int pa[])
{
	cnt = sizeof(pa) / sizeof(int);

	for (int i = 0;i < cnt;i++)
	{
		//printf("%d\n", *(pa + i));
	//	printf("%d\n", pa[i]);
		printf("%d\n", *pa++);

	}
}

int main()
{
	int ary[5] = { 10,20,30,40,50 };
	int cnt = sizeof(ary) / sizeof(int);
	print_ary(cnt,ary);	

	return 0;
}