#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	int ary[3]; 
	int i;
	int* pa = ary;
	//*(ary + 0) = 10;
	*pa = 10;
	// *(ary + 1) = *(ary+0) + 10;
	*(pa + 1) = *pa + 10;
	*(pa + 2) = *(pa+1) + 20;


	//printf("세번쨰 배열 요소에 키보드 입력:");
	//scanf("%d", pa+2);
	for (i = 0; i < 3; i++)
		printf("%5d ",*(pa+i));
	return 0;
}