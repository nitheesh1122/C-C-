#include<stdio.h>
int main()
{
	int a;
	for(a=0;a<=10;a++)
	{
		if(a==5)
		{
			break;//stops current iteration instantly
	    }
		printf ("%d\n",a);
	}

	return 0;
}

//for(initialisation;condition;modify)
