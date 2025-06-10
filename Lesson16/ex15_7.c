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

	//printf("%d\n", (*my_sum)(10, 40));  // 함수명은 주소이므로 함수명 my_sum(주소)에 간접 참조를 하여 주소가 가르키는 함수의 기능을 사용
	//printf("%d\n", my_sum(10, 40));  //
	printf("%p\n", fp(10, 40));
	printf("%d\n", fp1(10, 40));


	// printf("%p\n", fp);
	// 함수의 형태는 매개변수의 갯수와 자료형 그리고 반환값의 자료형 / 하
	// int my_sum(int a, int b)
	// 함수 포인터  int (*fp) (int ,int)
}

