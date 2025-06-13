#define MSG "Be Happy Good Year" 
#include<stdio.h>

int main()
{
	/*printf("apple이 저장된 시작 주소 값: %p\n","apple");
	printf("두번쨰 문자의 주소 값: %p\n", "apple"+1);
	printf("첫번째 문자: %c\n", *"apple");
	printf("두번쨰 문자: %c\n", *("apple"+1));
	printf("세번째 문자: %c\n", "apple"[2]);*/

	//char* dessert = "banana";
	//char* dinner = "apple";
	//char* dinner = "apple";


	//printf("%s\n%s\n", dessert, dinner);	
	//printf("%c\n%c\n", *dessert, *dinner);
	//printf("%c\n%c\n", dessert[0], dinner[0]);
	//printf("%p\n%p\n", dessert, dinner);

	//printf("오늘 후식은 %s\n",dessert );
	//dessert = "banana";
	//printf("내일 후식은 %s\n", dessert);
	//printf("내일 후식은 %s\n", MSG);

	// char ch[80];
	//printf("문자열 입력:");	
	//
	//scanf("%s",ch);	
	//printf("첫번쨰 입력문자: %s\n", ch);

	//scanf("%s", ch);
	//printf("두번쨰 입력문자: %s\n", ch);

	//scanf("%s", ch);
	//printf("세번쨰 입력문자: %s\n", ch);

	/*int age;
	char ch[80];
	
	printf("나이 입력:");
	scanf("%d", &age);
	getchar();

	printf("이름 입력:");
	gets(ch);

	printf("나이:%d, 이름:%s\n",age,ch);*/

	char ch[10];
	printf("문자열 입력:");
	fgets(ch, sizeof(ch), stdin);
	//ch[strlen(ch) - 1] = 'a';
	printf("입력한 문자:%s입니다",ch);


	return 0;
}