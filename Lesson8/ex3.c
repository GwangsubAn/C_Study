
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main()
{
	char str1[80];
	char str2[80];
	char tmp[80];

	printf("���ڿ� �Է� : ");
	scanf("%s %s",str1,str2);

	printf("���� ��: %s, %s\n", str1, str2);
	strcpy(tmp, str1);
	strcpy(str1, str2);
	strcpy(str2, tmp);
	printf("���� ��: %s, %s\n", str1, str2);

	return 0;
}