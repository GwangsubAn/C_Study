#include<stdio.h>
#include<string.h>


int main()
{
	char str[] = "apple";
	
	printf("%d\n", strlen(str));// 5
	printf("%d\n", sizeof(str));// 6
	printf("%s\n", str);


	return 0;
}