#include<stdio.h>
struct student
{
	int id;
	char name[20];
	double grade;
};


int main()
{
	struct student s1 = { 670713,"�ȱ���",4.9 },
		s2 = { 741106,"�����",4.96 },
		s3 = { 990405,"�ȼ���",7.9 };
	//		   s4 = { 050103,"�ȼ���",3.9 };

	struct student max;
	max = s1;
	if (s2.grade > max.grade)
	{
		max = s2;
	}
	if (s3.grade > max.grade)
	{
		max = s3;
	}

	printf("��ȣ: %d\n", max.id);
	printf("����: %s\n", max.name);
	printf("����: %.1f\n", max.grade);

	return 0;
}