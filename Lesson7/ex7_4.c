#include<stdio.h>
void put_char(void);

int main()
{
	put_char();	
	return 0;
}
void put_char()
{
		printf("apple");
		put_char();
}