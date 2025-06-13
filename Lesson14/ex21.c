#include<stdio.h>
void main()
{
	char a[5][10] = { "horse","fox","hippo","tiger","melon"};
	char* pchar[5] = {a[0],a[1],a[2],a[3],a[4]};

	int count = sizeof(pchar) / sizeof(pchar[0]); // 5

	for (int i = 0;i < count;i++)
	{
			printf("%c", pchar[i][i]);  // a e a a n : h o p e n
			//printf("%c", *(pchar[i] +j));
	}
		printf("\n");
	/*printf("%s\n", pchr[0]);
	printf("%s\n", pchr[1]);
	printf("%s\n", pchr[2]);
	printf("%s\n", pchr[3]);
	printf("%s\n", pchr[4]);*/
}