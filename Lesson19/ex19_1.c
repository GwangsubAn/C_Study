//#include<stdio.h>
#include "stdio.h"
#include "student.h"

int main()
{
	Student s1 = { 315,"홍길동" };
	printf("학번: %d 이름: %s\n",s1.num,s1.name );
	return 0;
}