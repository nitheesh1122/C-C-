#include<stdio.h>
void add();
int main()
{
	
	add();
	return 0;
}
void add()
{
	int a,b;
	printf("enter 2 integers\n");
	scanf("%d%d",&a,&b);
	
	printf("ans is%d",a+b);
 } 
