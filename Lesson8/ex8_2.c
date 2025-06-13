#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>


int main()
{
	int a=10;
	int* pa;
	pa = a;

	char str1[80] = "apple";
	char str2[20];

	strcpy(str1, "Good mOrning");
	strcpy(str2, str1);

	printf("%d\n", strlen(str2));// 5
	printf("%d\n", sizeof(str2));// 6
	printf("%s %s\n", str1,str2);


	return 0;
}