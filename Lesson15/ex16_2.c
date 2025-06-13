#include<stdio.h>

void func(int (*fp)(int, int))
{
	int a, b;
	int res;

	printf("두 정수값을 입력하세요");
	scanf("%d %d", &a, &b);
	res = fp(a, b);
	printf("%d\n", res);
}

int my_add(int a, int b)
{
	return a + b;
}

int my_minus(int a, int b)
{
	return a - b;
}

int my_max(int a, int b)
{
	a > b ? a : b;
}

void main()
{
	int sel;
	printf("01 두 정수의 합\n");
	printf("02 두 정수의 차\n");
	printf("03 두 정수중에서 큰 값 계산\n");
	
	printf("원하는 연산을 선택하세요 : ");
	scanf("%d", &sel);

	switch (sel)
	{
	case 01:
		func(my_add);
		break;
	case 02:
		func(my_minus);
		break;
	case 03:
		func(my_max);
		break;

	default :
		printf("메뉴에 없는 연산\n");
	}
}