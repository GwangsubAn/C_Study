#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
struct cracker
{
	int price;
	int count;
	double cal;
	char name[20];
};


int main()
{
	struct cracker ace = { 2000,10,250,"�������ڳ�" };
	struct cracker* ps;
	ps = &ace;

	printf("�̸�:%s \n", (*ps).name);
	printf("����:%d \n", (*ps).price);
	printf("����:%d \n", (*ps).count);
	printf("Į�θ�:%.1f \n", (*ps).cal);	

	return 0;
}