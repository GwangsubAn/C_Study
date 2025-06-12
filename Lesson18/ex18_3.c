#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int main()
{
	FILE* fp;
	char str[] = "pine apple\n";
	fp = fopen("D:\\C_Lession\\C_Study\\a.txt", "at");
	//fp = fopen("a.txt", "at");

	if (fp == NULL)
	{
		printf("파일이 열리지 않았습니다.\n");
		return 1;
	}
	int i = 0;
	while (str[i] != '\0')
	{	
		fputc(str[i],fp);
		i++;
	}
	fclose(fp);

	return 0;
}