#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

void main()
{
	char str1[20];
	char str2[20];
	char str3[20];
	char tmp[20];
	//int n;

	printf("단어 입력 :"); // kiwi banana grape  --> banana grape kiwi
	scanf("%s", str1);
	scanf("%s", str2);
	scanf("%s", str3);

	if (strcmp(str1, str2) > 0)
	{
		strcpy(tmp, str1);
		strcpy(str1,str2);
		strcpy(str2, tmp);
	}

	if (strcmp(str1, str3) > 0)
	{
		strcpy(tmp, str1);
		strcpy(str1, str3);
		strcpy(str3, tmp);
	}

	if (strcmp(str2, str3) > 0)
	{
		strcpy(tmp, str2);
		strcpy(str2, str3);
		strcpy(str3, tmp);
	}

	printf("입력한 단어:%s, %s, %s", str1, str2, str3);


}