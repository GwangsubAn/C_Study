#include<stdio.h>
int keyin(void);
int main()
{
	int get_num;
	get_num = keyin();
	printf("�Է��� �� : %d\n", get_num);
	return 0;
}

int keyin()
{
	int num;
	do
	{
		printf("����� �Է� : ");
		scanf("%d", &num);
	} 
	while (num <= 0);	

	return num;
}