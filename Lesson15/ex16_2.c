#include<stdio.h>

void func(int (*fp)(int, int))
{
	int a, b;
	int res;

	printf("�� �������� �Է��ϼ���");
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
	printf("01 �� ������ ��\n");
	printf("02 �� ������ ��\n");
	printf("03 �� �����߿��� ū �� ���\n");
	
	printf("���ϴ� ������ �����ϼ��� : ");
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
		printf("�޴��� ���� ����\n");
	}
}