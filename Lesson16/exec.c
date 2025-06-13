#include<stdio.h>

void print_str(char* *st)
{
	//int len = strlen(st);
	for (int i = 0; i < 3;i++)
	{
		printf("%s\n", *(st+i));
	}
}

int main()
{
	char* ch[3] = { 0 };

	*(ch+0) = "Hi";
	*(ch+1) = "Let me introduce";
	*(ch+2) = "Good Bye";


	print_str(ch);
	return 0;
}