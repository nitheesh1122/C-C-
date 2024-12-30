#include<stdio.h>
int main()
{
	//  *--pointers,&--memory address
	
	//pointers ---stores the memeory address of another variable
	
	int a=;
	
	//int *p=&a;
	
	//astrsiek--*
	
	int *p1;
	int **p2;
	p1=&a;
	p2=&p1;
	
	printf("value of a is %d\n",a);
	printf("value of a using single pointer is %d\n",*p1);
	printf("value of a using double pointer is %d",**p2);
	
	
	
}




