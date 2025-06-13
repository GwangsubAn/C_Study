#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main()
{
	char str1[80] = "monkey";
	char str2[80];

	//strcpy(str1, "tiger");
	printf("문자열 입력");
	gets(str1);
	
	printf("입력된 문자열:");
	puts(str1);

	
	return 0;
}
