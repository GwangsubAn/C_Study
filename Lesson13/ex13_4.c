#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
// Ű����� �Է��� �����߿��� �ҹ����� ������ ����ϴ� ���α׷�
// ������������(static)�� �Ϲ����������� ����
void auto_func()
{
	int a = 0;
	a++;
	printf("auto ��������: %d\n", a);
}
void static_func()
{
	static int a;
	a++;
	printf("static ��������: %d\n", a);
}

void main()
{
	int i;
	for (i = 0;i < 3; i++)
		auto_func();

	for (i = 0; i < 3; i++)
		static_func();
}