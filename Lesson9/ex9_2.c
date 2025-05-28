#include<stdio.h>
int main()
{

	int a=10;
	int* pa;
	pa = &a;
	printf("포인터 변수로 a 값:%d\n", *pa);
	printf("변수명으로 a 값:%d\n", a);
	return 0;
}