#define MSG "Be Happy Good Year" 
#include<stdio.h>

int main()
{
	/*printf("apple�� ����� ���� �ּ� ��: %p\n","apple");
	printf("�ι��� ������ �ּ� ��: %p\n", "apple"+1);
	printf("ù��° ����: %c\n", *"apple");
	printf("�ι��� ����: %c\n", *("apple"+1));
	printf("����° ����: %c\n", "apple"[2]);*/

	//char* dessert = "banana";
	//char* dinner = "apple";
	//char* dinner = "apple";


	//printf("%s\n%s\n", dessert, dinner);	
	//printf("%c\n%c\n", *dessert, *dinner);
	//printf("%c\n%c\n", dessert[0], dinner[0]);
	//printf("%p\n%p\n", dessert, dinner);

	//printf("���� �Ľ��� %s\n",dessert );
	//dessert = "banana";
	//printf("���� �Ľ��� %s\n", dessert);
	//printf("���� �Ľ��� %s\n", MSG);

	// char ch[80];
	//printf("���ڿ� �Է�:");	
	//
	//scanf("%s",ch);	
	//printf("ù���� �Է¹���: %s\n", ch);

	//scanf("%s", ch);
	//printf("�ι��� �Է¹���: %s\n", ch);

	//scanf("%s", ch);
	//printf("������ �Է¹���: %s\n", ch);

	/*int age;
	char ch[80];
	
	printf("���� �Է�:");
	scanf("%d", &age);
	getchar();

	printf("�̸� �Է�:");
	gets(ch);

	printf("����:%d, �̸�:%s\n",age,ch);*/

	char ch[10];
	printf("���ڿ� �Է�:");
	fgets(ch, sizeof(ch), stdin);
	//ch[strlen(ch) - 1] = 'a';
	printf("�Է��� ����:%s�Դϴ�",ch);


	return 0;
}