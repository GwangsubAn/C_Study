#include<stdio.h>
void put_char(int n);

int main()
{
	put_char(1);
	return 0;
}
void put_char(int x)
{
	printf("apple\n");
	if (x == 3)
		return;
	put_char(x + 1);
	printf("jam\n");

}