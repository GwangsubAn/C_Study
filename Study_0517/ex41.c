#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
int main()
{

int seats = 70;
int audiences = 65;
double rate;

rate = (double)audiences / (double)seats * 100;
//
printf("����� : %.1f%%", rate);
	return 0;
}