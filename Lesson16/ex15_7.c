#include<stdio.h>

int my_sum(int a, int b)
{
	return a + b;
}
int* fp(int a, int b)
{
	//int a;
	printf("%p\n",&a);
	return &a;
}
void main()
{
	int(*fp1)(int a, int b);

	int total;

	fp1 = my_sum;
	//total = fp(10, 40);

	//printf("%d\n", (*my_sum)(10, 40));  // �Լ����� �ּ��̹Ƿ� �Լ��� my_sum(�ּ�)�� ���� ������ �Ͽ� �ּҰ� ����Ű�� �Լ��� ����� ���
	//printf("%d\n", my_sum(10, 40));  //
	printf("%p\n", fp(10, 40));
	printf("%d\n", fp1(10, 40));


	// printf("%p\n", fp);
	// �Լ��� ���´� �Ű������� ������ �ڷ��� �׸��� ��ȯ���� �ڷ��� / ��
	// int my_sum(int a, int b)
	// �Լ� ������  int (*fp) (int ,int)
}

