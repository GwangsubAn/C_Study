#include<stdio.h>
#define VER 5
#define BIT16

int main()
{
	int max;
#if VER >= 6
	printf("���� %d�Դϴ�\n", VER);
#else
#error ������ ������ 6.0�̻��̾�� �մϴ�.
#endif

//#ifndef BIT16
#if !defined BIT16

	max = 32767;
#else
	max = 2147483647;
#endif
	printf("int�� ������ �ִ� : %d\n", max);

	return 0;
}