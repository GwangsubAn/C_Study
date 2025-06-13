#include<stdio.h>

<<<<<<< HEAD
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




=======
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
>>>>>>> 4a06ccbc0c39967ff2a571f281ae48f7cdeeba1c

}