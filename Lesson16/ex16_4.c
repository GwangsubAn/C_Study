#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
void check_pi(int* pi)
{
	if (pi == NULL)
	{
		printf("메모리가 부족\n");
		exit(1);
	}
}
int main(void)
{
	char temp[80];
	char* str[3];
	int i;
	
	for (i = 0;i < 3;i++)
	{
		printf("문자열을 입력하세요:");
		gets(temp);
		str[i] = (char*)malloc(strlen(temp) + 1);
		strcpy(str[i], temp);
	}

	for (i = 0;i < 3;i++)
	{
		printf("%s\n", str[i]);
	}
	for (i = 0;i < 3;i++)
	{
		free(str[i]);
	}
	return 0;

}