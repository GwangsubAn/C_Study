#include<stdio.h>
<<<<<<< HEAD
void func(int (*fp)(int, int))
{
	int a, b;
	int res;
	printf("�� �����Է�");
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
	printf("���޴� : 1,2,3,4");
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

=======

void swap(char ch[],void *pa,void *pb)
{
	if (ch == "int")
	{
		int *temp;
		temp = pa;
		pa =  pb;
		pb = temp;
	}
	else if (ch == "double")
	{
		double *temp;
		temp = pa;
		pa = pb;
		pb = temp;
	}

}

void main()
{
	int a,b;
	double x, y;

	printf("ù��° ����� ���̿� Ű �Է�: ");
	scanf("%d %lf", &a, &x);

	printf("�ι��� ����� ���̿� Ű �Է�: ");
	scanf("%d %lf", &b, &y);

	swap("int", &a, &b);
	swap("double", &x, &y);
	
	printf("ù��° ����� ���̿� Ű %d,%lf:\n",a,x);
	printf("�ι�° ����� ���̿� Ű %d,%lf:\n", b, y);
	
>>>>>>> 4a06ccbc0c39967ff2a571f281ae48f7cdeeba1c
}