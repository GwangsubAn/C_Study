#include<stdio.h>

void swap(char* *ppa, char* *ppb)
{
	char* tmp;
	tmp = *ppa;
	*ppa = *ppb;
	*ppb = tmp;

}
int main()
{
	char* pa = "success";
	char* pb = "failure";

	char* temp;

	printf("������: pa--> %s  , pb--> %s\n", pa, pb);
	temp = pa;
	pa = pb;
	pb = temp;
	swap(&pa, &pb);
	printf("������: pa--> %s  , pb--> %s\n", pa, pb);





}