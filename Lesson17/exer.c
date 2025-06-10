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
	struct cracker ace = { 2000,10,250,"버터코코넛" };
	struct cracker* ps;
	ps = &ace;

	printf("이름:%s \n", (*ps).name);
	printf("가격:%d \n", (*ps).price);
	printf("수량:%d \n", (*ps).count);
	printf("칼로리:%.1f \n", (*ps).cal);	

	return 0;
}