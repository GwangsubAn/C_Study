#include<stdio.h>

union student
{
	int num;
	double grade;
};
typedef union student Student;
int main()
{
	//union student s1 = { 10 };
	Student s1 = {10};

	printf("�й� : %d\n", s1.num);
	s1.grade = 7.5;
	printf("���� : %.1f\n", s1.grade);
	printf("�й� : %d\n", s1.num);	

	return 0;
}
