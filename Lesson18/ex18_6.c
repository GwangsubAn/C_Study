#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	FILE* fp;
	int ary[10] = { 13,10,13,13,10,26,13,10,13,10 };
	int i, res;
	fp = fopen("a.txt", "wb");
	for (i = 0; i < 10; i++)
	{
		fputc(ary[i], fp);
	}
	fclose(fp);

	fp = fopen("a.txt", "at+");
	for (i = 0; i < 10; i++)
	{
		res = fgetc(fp);
		if (res == EOF)
			break;
		printf("%d", res);
	}
	fclose(fp);

	return 0;
}