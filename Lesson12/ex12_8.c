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
// strcat �Լ�
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
// strlen �Լ�
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
	printf("������: %s\n", str);

	strcat(str, ps);
	printf("������: %s\n", str);*/

	char str[80];
	strcpy(str, "lion");
	printf("%s\n", str);

	strcat(str, "apple");
	printf("%s\n", str);

	strncpy(str, "pear", 1);
	printf("%s %d\n", str, strlen(str));

	//my_strcat(str1, str2);
	//printf("������: %s\n", str1);
	//printf("�ٸ� ���� ����: %s\n", my_strcat(str1, "kiwi"));
	// printf("str1�� ����: %d\n", my_strlen(str1)); //5
	// printf("str2�� ����: %d\n", my_strlen(str2)); // 12
	// my_strcmp(str1, str2)>0 ? printf("str1�� �� ŭ\n") : my_strcmp(str1, str2) < 0 ? printf("str2�� �� ŭ\n"): printf("str1�� str2�� ����\n"); // 12

	//// strcomp
	//// strncomp

	//char ch1[20] = "pear";
	//char ch2[20] = "peach";
	//if (strncmp(ch1, ch2,4) > 0)
	//{
	//	printf("���� ������ �ܾ�:%s\n", ch2);
	//	printf("���߿� ������ �ܾ�:%s\n", ch1);
	//}
	//else
	//{
	//	printf("���� ������ �ܾ�:%s\n", ch1);
	//	printf("���߿� ������ �ܾ�:%s\n", ch2);
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
		//char* ps1 = "banana";  // "banana" �� ����� �޸��� ù���� �ּҸ� ps1�� ����
		//char* ps2 = str2;  // str2�� "apple"�� ����� ù��° �޸��� �ּҰ��� ������ ����
		//printf("������: %s\n", str1);
		//
		//strcpy(str1, str2);  // str1�ڸ��� char�迭�̳� �迭���� ������ ������ ��� , str2�ڸ��� ���ڿ��� �ּҸ� �˼� �ִٸ� ������̵� ���  "banana"
		//printf("������: %s\n", str1);

		//strcpy(str1, ps1);
		//printf("������: %s\n", str1);

		//strcpy(str1, ps2);
		//printf("������: %s\n", str1);

		//strcpy(str1, "strawberry");  // ""
		//printf("������: %s\n", str1);

		//strncpy(str1, "tomato", 3);
		//str1[3] = '\0';
		//printf("str�� �� 3����: %s\n", str1); //"app"

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

		//printf("�����ϴ� ����:");
		//scanf("%s", ani);
		//// getchar();
		//// scanf("%*c");
		//// fgetc(stdin);
		//printf("�����ϴ� ����:");
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

	printf("���� ���ڿ�: %s\n", str1);

	strcpy(str1, str2);
	printf("�ٲ� ���ڿ�: %s\n", str1);

	strcpy(str1,ps1); 
	printf("�ٲ� ���ڿ�: %s\n", str1);

	strcpy(str1, ps2);
	printf("�ٲ� ���ڿ�: %s\n", str1);

	strcpy(str1, "banana");
	printf("�ٲ� ���ڿ�: %s\n", str1);


	return 0;
}
>>>>>>> 4a06ccbc0c39967ff2a571f281ae48f7cdeeba1c
