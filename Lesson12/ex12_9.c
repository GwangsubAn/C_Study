#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main()
{
	char str1[80] = { '\0' };
	str1[0] = '\0';
	char fruit1[20] = "mango-pie";
	char fruit2[20] = "apple-pie";

	printf("변경전 요리: %s\n", fruit1);
	strncpy(fruit1, fruit2, 5);

	printf("변경전 요리: %s\n", fruit1);

	strncpy(fruit1, "strawberryapple",15);
	printf("변경전 요리: %s\n", fruit1);

	fruit1 [5]= '\0'; 
	printf("변경전 요리: %s\n", fruit1);


}