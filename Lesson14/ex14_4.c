#include<stdio.h>
void main()
{
	char* pary[5] = {"apple","banana","cherry","grape","orange"};
	char ary[5][10] = { "strawberry","mango","peal","peach","melon" };
	//printf("%s\n", pary[2]); // cherry

	printf("%s\n", pary[0]); // cherry
	printf("%d\n", sizeof(pary[0])); // cherry

	printf("%s\n", pary[1]); // cherry
	
	printf("%s\n", pary[2]); // cherry

	printf("%p\n", pary[3]); // cherry
	printf("%p\n", pary[4]); // cherry


	printf("%p\n", &pary[0]); // cherry
	printf("%p\n", &pary[1]); // cherry
	printf("%p\n", &pary[2]); // cherry
	printf("%p\n", &pary[3]); // cherry
	printf("%p\n", &pary[4]); // cherry


	printf("%s\n", ary[1]); // mango


  } 