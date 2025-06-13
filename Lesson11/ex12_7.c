#include<stdio.h>
#include<string.h>

int main()
{
	char ch[80]="strawberry";	
	printf("입력한 문자: %s\n",ch);

	strcpy(ch, "banana");
//	ch[80] = "banana";
	printf("입력한 문자: %s\n", ch);
	
	return 0;
}