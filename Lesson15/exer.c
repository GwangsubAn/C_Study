#include<stdio.h>

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
	
}