#include<stdio.h>
typedef struct address
{
	char name[10];
	int age;
	char tel[15];
	char addr[20];
}Address;

void print(Address* sp)
{
	int i;
	//int count = sizeof(sp) / sizeof(sp[0]);
		for (i = 0; i < 5; i++)
		{
			//printf("%10s%5d%15s%20s\n", (*(sp+i)).name, sp[i].age, sp[i].tel, sp[i].addr);
			printf("%10s%5d%15s%20s\n", (*(sp + i)).name, (*(sp+i)).age, (*(sp+i)).tel, (*(sp+i)).addr);

		}

}

int main()
{
	//struct address list[5] =
	Address list[5] =

	{
		{"ȫ�浿",23,"111-1111","�︪�� ����"},
		{"�̼���",35,"222-2222","���� ���ʵ�"},
		{"�庸��",19,"333-3333","�ϵ� û����"},
		{"������",15,"444-4444","�泲 õ��"},
		{"���߱�",45,"555-5555","Ȳ�ص� ����"}
	};

	print(list);

	return 0;
}