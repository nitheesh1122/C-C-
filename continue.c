#include<stdio.h>
int main()
{
	int a;
	for(a=0;a<=10;a++)
	{
		if(a==5)
		{
		continue;//skips current iteration
	    }
		printf ("%d\n",a);
	}

	return 0;
}

//for(initialisation;condition;modify)
