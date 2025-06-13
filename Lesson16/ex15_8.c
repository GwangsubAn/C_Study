#include<stdio.h>

void func(int (*fp)(int,int))
{
	int a, b,res;
	printf("두 정수를 입력하세요: ");
	scanf("%d %d", & a, &b);
	res = fp(a, b);
	printf("결과값: %d",res);
}
int my_plus(int a, int b)
{
	return a + b;
}
int my_minus(int a, int b)
{
	return a - b;
}
int my_multiply(int a, int b)
{
	return a * b;
}
void main()
{
	int sel;
	printf("01 두수의 덧셈\n");
	printf("02 두수의 뺼셈\n");
	printf("03 두수의 곱셈\n");
	printf("실행할 메뉴를 선택하세요:");

	scanf("%d", &sel);

	switch (sel)
	{
	case 1:
		func(my_plus);
		break;
	case 2:
		func(my_minus);
		break;
	case 3:
		func(my_multiply);
		break;	
	}
}