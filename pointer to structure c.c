#include<stdio.h>
struct point
{
	int x;
	int y;
	
}sd;
int main()
{
	struct point p1={10,20};
	struct point *ptr=&p1;
	printf("coordinates:(%d,%d)\n",ptr->x,ptr->y);
	return 0;
}

