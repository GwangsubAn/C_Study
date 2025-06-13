#include<stdio.h>
void main()
{
	int stock[25][200];// = { 0 };
	float sight[50][2];
	char word[15000][46];

	char animal[][20] = { "cat","dog","rabbit","mouse","fish" };
	/*{
		{'d','o','g','\0'},
	{'t','i','g','e','r','\0'},
		{'c','a','t','\0'},
	{'r','a','b','b','i','y','\0'},
	{'f','i','s','h','\0'}
	};*/

	int i, count;
	count = sizeof(animal) / sizeof(animal[0]);
	/*for (i = 0;i < count;i++)
	{
		scanf("%s", animal[i]);
	}*/

	for (i = 0;i < count;i++)
	{
		printf("%s\t", animal[i]);
	}
}