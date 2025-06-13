#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void input_lotto(int* pnum);// 로또번호 6수자를 저장하는 함수 원형
void print_lotto(int* pnum);// 로또번호 6수자를 출력하는 함수 원형
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
		printf("숫자 입력: ");
		scanf("%d", &temp);

		
			for (int i = 0; i < 6; i++)
			{
				if (temp != pnum[i])
				{
					flag = 0;
				}
				else
				{
					printf("이미 있는 숫자\n");
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

