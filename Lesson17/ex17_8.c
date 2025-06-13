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
		{"홍길동",23,"111-1111","울릉도 독도"},
		{"이순신",35,"222-2222","서울 서초동"},
		{"장보고",19,"333-3333","완도 청해진"},
		{"유관순",15,"444-4444","충남 천안"},
		{"안중근",45,"555-5555","황해도 해주"}
	};

	print(list);

	return 0;
}