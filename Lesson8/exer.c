#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main()
{
	char str[80];
	printf("�����Է� : ");
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

	printf("�ٲ﹮�� : %s\n",str);
	printf("�ٲ﹮�ڼ�: %d\n", count);

	return 0;
}