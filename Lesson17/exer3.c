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
		printf("현재방향 : 위");
		break;

	case DOWN:
		printf("현재방향 : 아래");
		break;
	case LEFT:
		printf("현재방향 : 왼쪽");
		break;
	case RIGHT:
		printf("현재방향 : 오른쪽");
		break;
	}

	return 0;
}