#include<stdio.h>
int main()
{
	char ch;
	int in;
	double db;

	char* pc = &ch;
	int* pin = &in;
	double* pdb = &db;

	printf("char�� ������ �ּ� ũ�� : %d\n",sizeof(ch ));
	printf("int�� ������ �ּ� ũ�� : %d\n", sizeof(in));
	printf("double�� ������ �ּ� ũ�� : %d\n\n", sizeof(db));

	printf("char�� ������ �ּ� ũ�� : %d\n", sizeof(&ch));
	printf("int�� ������ �ּ� ũ�� : %d\n", sizeof(&in));
	printf("double�� ������ �ּ� ũ�� : %d\n\n", sizeof(&db));

	printf("char�� * �������� ũ�� : %d\n", sizeof(pc));
	printf("int�� * �������� ũ�� : %d\n", sizeof(pin));
	printf("double�� *�������� ũ�� : %d\n\n", sizeof(pdb));

	printf("char�� * �������� ũ�� : %d\n", sizeof(*pc));
	printf("int�� * �������� ũ�� : %d\n", sizeof(*pin));
	printf("double�� *�������� ũ�� : %d\n\n", sizeof(*pdb));

	return 0;
}
