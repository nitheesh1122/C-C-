#include<stdio.h>
int main()
{
	int a=20;
	while(a<50)
	{
		if((a%2==0))
		{
		
		printf("even numbers %d\n",a);
		a++;
	    }
		
		if(a%2!=0)
		{
		
		printf("odd numbers %d\n",a);
		a++;
	    }
		else if (a<=50)
		{
			printf("%d is not a prime",a);
		}
		else
		{
		    printf("%d is prime",a);
		}
			
    }
	return 0;
}
