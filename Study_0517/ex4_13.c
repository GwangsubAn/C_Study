#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a = 10, b = 12;
// a: 00000000 00000000 00000000 1010
// b : 00000000 00000000 00000000 1100

printf("a & b : %d\n ", a & b); // 8
printf("a | b : %d\n", a | b); // 14
printf("a ^ b : %d\n", a ^ b); // 6
printf("~ a : %d\n", ~a); //-11

printf("a >> 2 : %d\n", a >> 2); // 2
printf("b <<2 : %d\n", b << 2); // 48
}