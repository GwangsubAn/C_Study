#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void input_lotto(int* pnum);// �ζǹ�ȣ 6���ڸ� �����ϴ� �Լ� ����
void print_lotto(int* pnum);// �ζǹ�ȣ 6���ڸ� ����ϴ� �Լ� ����
int main()
{
	int lotto[6];
	input_lotto(lotto);
	print_lotto(lotto);

	return 0;
}

void input_lotto(int* pnum)
{
	int n = 0;
	int temp;
	int flag = 0;
	do
	{
		printf("���� �Է�: ");
		scanf("%d", &temp);

		
			for (int i = 0; i < 6; i++)
			{
				if (temp != pnum[i])
				{
					flag = 0;
				}
				else
				{
					printf("�̹� �ִ� ����\n");
					flag = 1;
					break;
				}
			}

			if (flag == 0)
			{
				pnum[n] = temp;
				n++;
			}
			flag = 0;	

	} while (n < 6);
}

void print_lotto(int* pnum)
{
	for (int i = 0; i < 6; i++)
	{
		printf("%d\t", pnum[i]);
	}
}

