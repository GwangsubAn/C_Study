#include<stdio.h>

void func(int (*fp)(int,int))
{
	int a, b,res;
	printf("�� ������ �Է��ϼ���: ");
	scanf("%d %d", & a, &b);
	res = fp(a, b);
	printf("�����: %d",res);
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
	printf("01 �μ��� ����\n");
	printf("02 �μ��� �E��\n");
	printf("03 �μ��� ����\n");
	printf("������ �޴��� �����ϼ���:");

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