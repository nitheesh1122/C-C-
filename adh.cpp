#include <stdio.h>
int main()
{
	int a=10,b=20,c;
	printf("before swap a is  %d\n",a);
	
	printf("before swap b is  %d\n",b);
	
	c=a;
	a=b;
	b=c;
	
	printf("after swap a is  %d\n",a);
	
	printf("after swap b is  %d\n",b);
	
	return 0;
}
