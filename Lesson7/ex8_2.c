#include<stdio.h>
int main()
{
	int score[5];

	score[0] = 90;
	score[1] = 80;	
	score[2] = score[0] + score[1] ;
	scanf("%d", &score[3]);

	
	printf("%d\n", score[2]);
	printf("%d\n", score[3]);
	printf("%d\n", score[4]);

	
	return 0;
}

