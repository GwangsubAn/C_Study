#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
// 키보드로 입력한 문자중에서 소문자의 갯수를 출력하는 프로그램
// 정적지역변수(static)와 일반지역변수의 차이
void auto_func()
{
	int a = 0;
	a++;
	printf("auto 지역변수: %d\n", a);
}
void static_func()
{
	static int a;
	a++;
	printf("static 지역변수: %d\n", a);
}

void main()
{
	int i;
	for (i = 0;i < 3; i++)
		auto_func();

	for (i = 0; i < 3; i++)
		static_func();
}