#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main()
{
	FILE* fp;
	int age;
	char name[20];

	fp = fopen("c.txt", "r");
	/*if (fp == NULL)
	{
		printf("������ ������ �ʾҽ��ϴ�");
		return 1;
	}*/

	fscanf(fp, "%d", &age);
	fgetc(fp);
	fgets(name, sizeof(name), fp);

	printf("���� : %d, �̸� : %s",age, name);
	fclose(fp);

	return 0;
}
