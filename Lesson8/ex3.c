
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main()
{
	char str1[80];
	char str2[80];
	char tmp[80];

	printf("문자열 입력 : ");
	scanf("%s %s",str1,str2);

	printf("변경 전: %s, %s\n", str1, str2);
	strcpy(tmp, str1);
	strcpy(str1, str2);
	strcpy(str2, tmp);
	printf("변경 후: %s, %s\n", str1, str2);

	return 0;
}