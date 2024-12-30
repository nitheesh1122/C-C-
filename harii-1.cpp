#include<stdio.h>
int main()
{
	int a=57,b=34,c,d,e;
	
	c=(a>b)&&(a<b);
	printf("value of c is %d\n",c);
	
	d=(a<b)||(a>b);
	printf("value of d is %d\n",d);
	
	//not---inverse of o/p
	//1--0,  0---1
	e=!(a>b);
	printf("ans is %d",e);
	
	return 0;
}
