#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main()
{
	char str1[80] = "monkey";
	char str2[80];
	
	//strcpy(str1, "tiger");
	strcpy(str2, str1);

	printf("str1�� str2�� %s,%s\n", str1, str2);

	strcpy(str1, "tiger");
	strcpy(str2, str1);

	printf("str1�� str2�� %s,%s\n", str1, str2);

	return 0;
}
