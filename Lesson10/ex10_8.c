#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void input_ary(double* pary, int size); // �迭�� ����Ÿ �Է��ϴ� �Լ� ��������
double max_arr(double* pary, int size);// �迭�� ���� ����ū ���� ��ȯ�ϴ� �Լ� ��������
void print_arr(double* pary, int size);// �迭�� ���� ����ϴ� �Լ� ��������


int main()
{
	int size;
	double ary[5];
	double max;

	size = sizeof(ary) / sizeof(ary[0]);
	input_ary(ary, size);

	print_arr(ary, size);

	max = max_arr(ary, size);
	printf("�迭�� ���� ū ��: %.1lf\n", max);


	return 0;
}

// �迭�� ����Ÿ �Է��ϴ� �Լ� ����
void input_ary(double pary[5], int size)
{
	int i;
	printf("�Ǽ� %d�� �Է�:",size);
	for (i = 0; i < size; i++)
	{
		//scanf("%lf", pary + i);
		scanf("%lf", &pary[i]);
	}
}

// �迭�� ���� ����ū ���� ��ȯ�ϴ� �Լ� ����
double max_arr(double* pary, int size)
{
	int i;
	double max = 0;
	for (i = 0; i < size; i++)
	{
		//if (*(pary + i) > max)
			if ((pary[i]) > max)
		//	max = *(pary + i);
		 max = pary[i];
	}
	return max;
}

// �迭�� ���� ����ϴ� �Լ� ����
void print_arr(double* pary, int size)
{
	int i;
	for (i = 0; i < size; i++)
	{
		printf("%.1lf\t", pary[i]);
	}
	printf("\n");
}

