#include<stdio.h>
int main()
{
	int n1=235,n2=45,n3=56,n4=77;
	if((n1>n2)&&(n1>n3)&&(n1>n4))
	{
		printf("n1 is the greater");
	}
	else if((n2>n1)&&(n2>n3)&&(n2>n4))
	{
		printf("n2 is the greater");
	}
	else if((n3>n1)&&(n3>n2)&&(n3>n4))
	{
		printf("n3 is the greater");
	}
	else
	{
		printf("n4 is the greater");
	}
	return 0;
}
