#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

void main()
{
	char str1[16];
	char str2[16];
	int n;
	printf("�ܾ� �Է� :"); // pineapple : 9
	scanf("%s", str1);
	strcpy(str2,str1);

	if (strlen(str1) > 5)  // pineapple
	{
		for (n = 5;n < strlen(str1);n++)
		{
			str2[n] = '*';
		}
		str2[n] = '\0';
	}
	//str2[strlen(str1)] = '\0';


	printf("�Է��� �ܾ�:%s, ������ �ܾ� : % s	", str1,str2);


}