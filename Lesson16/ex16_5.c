#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


void print_str(char** ps)
{

	while (*ps != NULL)
	{
		printf("%s\n", *ps);
		ps++;
	}
}
int main(void)
{
	char temp[80];
	char* str[21] = { 0 };
	int i = 0;


	while (i < 20)
	{
		printf("문자열을 입력하세요:");
		gets(temp);
		if (strcmp(temp, "end") == 0) break;
		str[i] = (char*)malloc(strlen(temp) + 1);
		strcpy(str[i], temp);
		i++;
	}
	print_str(str);  // 입력받은 문자열의 첫 글자가 저장된 주소


	for (i = 0;str[i] != NULL;i++)
	{
		free(str[i]);
	}
	return 0;
}