#include<stdio.h>

void swap_pa(char** ppa, char** ppb)
{
	char* pt;
	pt = *ppa; // 
	*ppa = *ppb; // 
	*ppb = pt;

}
void main()
{
	char* pa = "success";   // 100
	char* pb = "failure";

	printf("pa-> %s, pb-> %s\n", pa, pb);
	swap_pa(&pa, &pb);
	printf("pa-> %s, pb-> %s\n", pa, pb);

}