#include<stdio.h>

typedef enum
{
	CYAN,MEGENTA,YELLOW=5,BALCK
}COLOR;  // 

typedef enum
{
	UP,DOWN,LEFT,RIGHT
}ARROW;  // 

int main()
{
	COLOR my_color = YELLOW,c,BLACK;
	my_color = c;
	ARROW direction = UP;

	for (c = CYAN; c <= BALCK; c++)
	{
		direction++;
		direction = direction % 4;
		if(c == my_color) break;
	}

	switch (direction)
	{
	case UP: 
		printf("������� : ��");
		break;

	case DOWN:
		printf("������� : �Ʒ�");
		break;
	case LEFT:
		printf("������� : ����");
		break;
	case RIGHT:
		printf("������� : ������");
		break;
	}

	return 0;
}