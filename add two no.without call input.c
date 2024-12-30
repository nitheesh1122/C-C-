#include<stdio.h>
int add(int,int);
int main()
{
	int a,b;
	printf("enter two integer numbers\n");
	scanf("%d,%d"&a,&b);
	add(a,b);
	printf("%d+%d=%d\n";a,b,add(a,b));
	return 0;
}

	int add(int x,int y)
	{
		return(x+y);
	}
 
