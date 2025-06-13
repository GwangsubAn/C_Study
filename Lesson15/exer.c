#include<stdio.h>
void func(int (*fp)(int, int))
{
	int a, b;
	int res;
	printf("두 정수입력");
	scanf("%d %d", &a, &b);
	res = fp(a, b);
	printf("%d", res);
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
int my_divide(int a, int b)
{
	return a / b;
}
void main()
{
	int sel;
	printf("계산메뉴 : 1,2,3,4");
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
	case 4:
		func(my_divide);
		break;
	}

}