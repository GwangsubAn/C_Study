#include<stdio.h>
#include<string.h>

int main()
{
	char ch[80]="strawberry";	
	printf("�Է��� ����: %s\n",ch);

	strcpy(ch, "banana");
//	ch[80] = "banana";
	printf("�Է��� ����: %s\n", ch);
	
	return 0;
}