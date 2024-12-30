#include<stdio.h>
int addition(int,int);
int main()
{
	int a,b,c;
    c=addition(2,3);
    printf("addition is %d",c);
    return 0;
}
int addition(int a,int b)
{
	return a+b;
}
