#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void swap(double* pa, double* pb);
void line_up(double* pmax, double* pmid, double* pmin);

int main()
{
	double max, mid, min;
	printf("실수를 입력하세요:");
	scanf("%lf %lf %lf", &max, &mid, &min);

	printf("정렬 전: %.1lf, %.1lf, %.1lf\n", max, mid, min);
	line_up(&max, &mid, &min);
	printf("정렬 후: %.1lf, %.1lf, %.1lf\n", max, mid, min);
	return 0;
}

void swap(double* pa, double* pb)
{
	double temp;
	temp = *pa;
	*pa = *pb;
	*pb = temp;
}
void line_up(double* pmax, double* pmid, double* pmin)
{
	if (*pmax < *pmid) // 5 2 7
		swap(pmax, pmid);  
	if (*pmax < *pmin)
		swap(pmin, pmax); // 7 2 5
	if (*pmid < *pmin)
		swap(pmid, pmin); // 7 5 2
}
