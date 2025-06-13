#define _CRT_SECURE_MO_WARNINGS
#include<stdio.h>

void my_gets(char* str, int len)
{
	char ch;
	int cnt = 0;
	ch = getchar();
	while((ch != '\n') && (cnt < len - 1))
	{
		//str[cnt] = ch; // 
		*(str + cnt) = ch;
		cnt++;
		ch = getchar();
	}
	str[cnt] = '\0';

}
int main()
{
	char ch[7];
	my_gets(ch, sizeof(ch));

	printf("%s\n", ch);

	return 0;
}