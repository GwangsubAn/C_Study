#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
struct score
{
	int num;
	char name[20];
	int score[3];
	int total;
	double avg;
	char grade;	
};
typedef struct score Score;

char print_grade(double avg)
{
	int score = avg / 10;
	char grade = 'a';
	switch (score)
	{
	case 10:
	case 9:
		grade = 'A';
		break;
	case 8:
		grade = 'B';
		break;
	case 7:
		grade = 'C';
		break;
	default:
		grade = 'F';
	}

	return grade;

}
int main()
{
	Score s[5];
	Score temp[5];
	int i;
	for (i = 0; i < 5; i++)
	{
		printf("학번: ");
		scanf("%d", &s[i].num);

		printf("이름: ");
		scanf("%s", s[i].name);

		printf("국어, 영어, 수학 점수: ");
		scanf("%d%d%d", &s[i].score[0], &s[i].score[1], &s[i].score[2]);

		s[i].total = s[i].score[0] + s[i].score[1] + s[i].score[2];
		s[i].avg = s[i].total / 3.f;
		s[i].grade = print_grade(s[i].avg);

	}

	printf("#정렬 전 데이터 ...\n");

	for (i = 0; i < 5; i++)
	{
		printf("%d %s %d %d %d %d %.1f %c\n", s[i].num, s[i].name, s[i].score[0], s[i].score[1], s[i].score[2], s[i].total, s[i].avg, s[i].grade);
	}

	printf("\n");


	for (i = 0; i < 4; i++)
	{
		for (int j = i + 1; j < 5; j++)
		{
			if (s[i].total < s[j].total)
			{
				temp[i] = s[j];
				s[j] = s[i];
				s[i] = temp[i];

				/*s[i].num = s[j].num;
				strcpy(s[i].name,s[j].name);
				s[i].score[0] = s[j].score[0];
				s[i].score[1]= s[j].score[1];
				s[i].score[2] = s[j].score[2];
				s[i].total = s[j].total;
				s[i].avg = s[j].avg;
				s[i].grade = s[j].grade;*/
			}
		}
	}
	
	printf("#정렬 후 데이터 ...\n");
	for (i = 0; i < 5; i++)
	{
		printf("%d %s %d %d %d %d %.1f %c\n", s[i].num, s[i].name, s[i].score[0], s[i].score[1], s[i].score[2], s[i].total, s[i].avg, s[i].grade);
	}

	
	return 0;
}