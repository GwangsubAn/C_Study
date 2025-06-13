#include<stdio.h>
#define VER 5
#define BIT16

int main()
{
	int max;
#if VER >= 6
	printf("버전 %d입니다\n", VER);
#else
#error 컴파이 버전은 6.0이상이어야 합니다.
#endif

//#ifndef BIT16
#if !defined BIT16

	max = 32767;
#else
	max = 2147483647;
#endif
	printf("int형 변수의 최댓값 : %d\n", max);

	return 0;
}