#include<stdio.h>
int keyin(void);
int main()
{
	int get_num;
	get_num = keyin();
	printf("입력한 값 : %d\n", get_num);
	return 0;
}

int keyin()
{
	int num;
	do
	{
		printf("양수를 입력 : ");
		scanf("%d", &num);
	} 
	while (num <= 0);	

	return num;
}