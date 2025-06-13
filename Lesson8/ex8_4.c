#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
int main()
{
	char str[80];// = "banana applejam";
	//printf("최초 문자열: %s\n", str);
	
	//printf("문자열 입력:");
	//scanf("%s", str);	
	str[0] = 'a';
	str[1] = 'b';
	str[2] = 'b';

	str[3] = 'c';
	str[4] = '0';
	
	//str[6] = '\0';




	printf("입력 문자열:%s\n",str);


}