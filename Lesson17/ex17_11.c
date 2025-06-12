#include<stdio.h>

typedef enum season
{
	SPRING,SUMMER,AUTOMN,WINTER
}Season;

//typedef enum season Season;

int main()
{
	Season ss;
	char* pc = NULL;

	ss = WINTER;


	switch (ss)
	{
	case SPRING :
		pc = "inline";
		break;

	case SUMMER:
		pc = "inswimming";
		break;

	case AUTOMN:
		pc = "trip";
		break;

	case WINTER:
		pc = "skiing";
		break;
	}

	printf("나의 레져활동: %s\n", pc);

	return 0;
}