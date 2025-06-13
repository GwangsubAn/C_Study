#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

<<<<<<< HEAD
char* my_strcpy(char* pa, char* pb)
{
	//int i = 0;
	//char ch = pb[i];
	//char ch = *(pb+i);
	char* po = pa;

	while (*pb != '\0')
	{
		*pa = *pb;
		pa++;
		pb++;
		//*(pa+i) = *(pb+i);

	}
	*pa = '\0';
	//*(pa + i) = '\0';
	return po;

}
char my_gets(char* str)
{
	char ch;
	while ((ch = getchar()) != '\n')
	{
		*str = ch;
		str++;
	}
	*str = '\0';
	return 0;
}
char* my_strcy(char* st1, char* st2)
{
	char* po = st1;
	while (*st1 != '\0')
	{
		*st1 = *st2;
		st1++;
		st2++;
	}
	*st1 = '\0';
	return po;
}
// strcat 함수
char* my_strcat(char* str1, char* str2)
{
	char* pstr1 = str1;
	while (*str1 != '\0')
		str1++;
	while (*str2 != '\0')
	{
		*str1 = *str2;
		str1++;
		str2++;
	}
	*str1 = '\0';
	return pstr1;

}
// strlen 함수
int my_strlen(char* str1)
{
	int n = 0;
	while (*str1 != '\0')
	{
		str1++;
		n++;
	}
	return n;
}

int my_strcmp(char* str1, char* str2)
{
	while ((*str1==*str2)&&(*str1 != '\0'))
	{
		str1++;
		str2++;
	}

	if (*str1 > *str2) return 1;
	else if (*str1 < *str2) return -1;
	else return 0;
}

int main()
{
	/*char str[] = "lion";
	char *ps = "king";
	strcpy(str, "cat");
	printf("변경전: %s\n", str);

	strcat(str, ps);
	printf("변경전: %s\n", str);*/

	char str[80];
	strcpy(str, "lion");
	printf("%s\n", str);

	strcat(str, "apple");
	printf("%s\n", str);

	strncpy(str, "pear", 1);
	printf("%s %d\n", str, strlen(str));

	//my_strcat(str1, str2);
	//printf("변경후: %s\n", str1);
	//printf("다른 문자 대입: %s\n", my_strcat(str1, "kiwi"));
	// printf("str1의 길이: %d\n", my_strlen(str1)); //5
	// printf("str2의 길이: %d\n", my_strlen(str2)); // 12
	// my_strcmp(str1, str2)>0 ? printf("str1이 더 큼\n") : my_strcmp(str1, str2) < 0 ? printf("str2가 더 큼\n"): printf("str1과 str2가 같음\n"); // 12

	//// strcomp
	//// strncomp

	//char ch1[20] = "pear";
	//char ch2[20] = "peach";
	//if (strncmp(ch1, ch2,4) > 0)
	//{
	//	printf("먼저 나오는 단어:%s\n", ch2);
	//	printf("나중에 나오는 단어:%s\n", ch1);
	//}
	//else
	//{
	//	printf("먼저 나오는 단어:%s\n", ch1);
	//	printf("나중에 나오는 단어:%s\n", ch2);
	//}


	{

		// strcat 
		// strncat	
		//char ch1[20]={ '\0' };
		////= "mango";
		//printf("%s\n", ch1);

		//strcat(ch1, "-");
		//strcat(ch1, "pie");
		//printf("%s\n", ch1); // mango-pie 

		//strcat(ch1, "-");
		//strncat(ch1, "cookies-icecream", 7); // mango-pie cookie 
		//printf("%s\n", ch1);
		//printf("%d", '\0');
	}

	{

		//char str1[80] = "strawberry";
		//char str2[80]="apple";
		////char str3[80];
		//char* ps1 = "banana";  // "banana" 가 저장된 메모리의 첫번쨰 주소를 ps1에 저장
		//char* ps2 = str2;  // str2는 "apple"이 저장된 첫번째 메모리의 주소값을 가지고 있음
		//printf("변경전: %s\n", str1);
		//
		//strcpy(str1, str2);  // str1자리는 char배열이나 배열명을 저장한 포인터 사용 , str2자리는 문자열의 주소를 알수 있다면 어느것이든 사용  "banana"
		//printf("변경후: %s\n", str1);

		//strcpy(str1, ps1);
		//printf("변경후: %s\n", str1);

		//strcpy(str1, ps2);
		//printf("변경후: %s\n", str1);

		//strcpy(str1, "strawberry");  // ""
		//printf("변경후: %s\n", str1);

		//strncpy(str1, "tomato", 3);
		//str1[3] = '\0';
		//printf("str의 앞 3글자: %s\n", str1); //"app"

	}
	{
		/*str[0] = 'a';
		str[1] = 'p';
		str[2] = 'p';
		str[3] = 'l';
		str[4] = 'e';
		str[5] = '\0';
		printf("%s", str);*/
		//getchar();
		//*str = "Apple";
		//printf("%s", *str);

		//char ani[20];
		//char why[80];

		//printf("종아하는 동물:");
		//scanf("%s", ani);
		//// getchar();
		//// scanf("%*c");
		//// fgetc(stdin);
		//printf("종아하는 이유:");
		//fgets(why, sizeof(why), stdin);
		//printf("%s is %s",ani,why);


		/*int i = 0;
		char ch;
		do
		{
			ch = getchar();
			str[i] = ch;
			i++;
		} while (ch!='\n');
		str[--i] = '\0';
		printf("%s", str);*/
		//my_gets(str);
		//printf("%s", str);
		//char* pa = "mango";
		//char str[80] = "mango";

		/*char* ps = "applepie";
		ps += 5;
		printf("%s", ps);*/
	}
	return 0;

}
=======
int main()
{
	char str1[80]="strawberry";
	char str2[80] = "banana";
	char* ps1 = "apple";
	char* ps2 = str2;

	printf("최초 문자열: %s\n", str1);

	strcpy(str1, str2);
	printf("바뀐 문자열: %s\n", str1);

	strcpy(str1,ps1); 
	printf("바뀐 문자열: %s\n", str1);

	strcpy(str1, ps2);
	printf("바뀐 문자열: %s\n", str1);

	strcpy(str1, "banana");
	printf("바뀐 문자열: %s\n", str1);


	return 0;
}
>>>>>>> 4a06ccbc0c39967ff2a571f281ae48f7cdeeba1c
