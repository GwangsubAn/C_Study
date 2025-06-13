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

	printf("변경전: pa--> %s  , pb--> %s\n", pa, pb);
	temp = pa;
	pa = pb;
	pb = temp;
	swap(&pa, &pb);
	printf("변경후: pa--> %s  , pb--> %s\n", pa, pb);





}