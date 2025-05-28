#include<stdio.h>
int main()
{
	char ch;
	int in;
	double db;

	char* pc = &ch;
	int* pin = &in;
	double* pdb = &db;

	printf("char형 변수의 주소 크기 : %d\n",sizeof(ch ));
	printf("int형 변수의 주소 크기 : %d\n", sizeof(in));
	printf("double형 변수의 주소 크기 : %d\n\n", sizeof(db));

	printf("char형 변수의 주소 크기 : %d\n", sizeof(&ch));
	printf("int형 변수의 주소 크기 : %d\n", sizeof(&in));
	printf("double형 변수의 주소 크기 : %d\n\n", sizeof(&db));

	printf("char형 * 포인터의 크기 : %d\n", sizeof(pc));
	printf("int형 * 포인터의 크기 : %d\n", sizeof(pin));
	printf("double형 *포인터의 크기 : %d\n\n", sizeof(pdb));

	printf("char형 * 포인터의 크기 : %d\n", sizeof(*pc));
	printf("int형 * 포인터의 크기 : %d\n", sizeof(*pin));
	printf("double형 *포인터의 크기 : %d\n\n", sizeof(*pdb));

	return 0;
}
