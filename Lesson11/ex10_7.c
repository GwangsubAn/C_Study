#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void print_ary(int* ary, int size);
int main(void)
{
	int ary1[5] = { 10,20,30,40,50 };
	int ary2[7] = { 10,20,30,40,50,60,70 };

	print_ary(ary1, sizeof(ary1) / sizeof(int));
	print_ary(ary1, 5);
	print_ary(ary1, 7);

	print_ary(ary2, sizeof(ary2) / sizeof(int));


	return 0;
}
void print_ary(int* pa, int size)
{
	//int cnt = a / sizeof(pa[0]);
	for (int i = 0; i < size; i++)
		printf("%d\t", pa[i]);



}