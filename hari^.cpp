#include<stdio.h>
int main()
{

	int a=67,b=56,c,e,d;
	c=(a>b)||(a<b);
	printf("value of c is %d\n",c);
	e=!(a>b);
	printf("ans is %d\n",e);
	d=(a<b)?a:b;
	printf("ans is %d",d);
	return 0;
}
