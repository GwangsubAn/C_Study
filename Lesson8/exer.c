#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main()
{
	char str[80];
	printf("문장입력 : ");
	gets(str);
	int i = 0;
	int count = 0;

	while (str[i] != '\0')
	{
		if ((str[i] >= 'A') && (str[i] <= 'Z'))
		{
			str[i] += 32;
			count++;
		}
		i++;
	}

	printf("바뀐문장 : %s\n",str);
	printf("바뀐문자수: %d\n", count);

	return 0;
}