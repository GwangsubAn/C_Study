#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int main()
{
	FILE* fp;
	int ch;
	fp = fopen("D:\\C_Lession\\C_Study\\a.txt", "r");
	//fp = fopen("a.txt", "r");

	if (fp == NULL)
	{
		printf("������ ������ �ʾҽ��ϴ�.\n");
		return 1;
	}

	while (1)
	{
		ch = fgetc(fp);
		if (ch == EOF)
			break;
		putchar(ch);
	}
	fclose(fp);

	return 0;
}