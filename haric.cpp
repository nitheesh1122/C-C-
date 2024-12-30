#include <stdio.h>
int main()
{
	int a=23,b=45,c,d,e;
	printf("add is %d\n",a+b);
	c=(a<b)&&(a>b);
	printf("c is %d\n",c);
	d=!(a<b);
	printf("d is %d\n",d);
	e=(a>b)?a:b;
	printf("e  is %d",e);
	return 0;
}
