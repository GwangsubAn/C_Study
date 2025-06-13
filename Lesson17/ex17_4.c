#include<stdio.h>
struct student
{
	int id;
	char name[20];
	double grade;
};


int main()
{
	struct student s1 = { 670713,"¾È±¤¼·",4.9 },
		s2 = { 741106,"Àå¼÷Èñ",4.96 },
		s3 = { 990405,"¾È¼öÇö",7.9 };
	//		   s4 = { 050103,"¾È¼­Çö",3.9 };

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

	printf("¹øÈ£: %d\n", max.id);
	printf("¼º¸í: %s\n", max.name);
	printf("ÇÐÁ¡: %.1f\n", max.grade);

	return 0;
}