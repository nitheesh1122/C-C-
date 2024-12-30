#include<stdio.h>
int main()
{
    int n1=340,n2=45,n3=57;
    
   if((n1>n2)&&(n1>n3))
   {
   	printf("n1 is greater");
   }
   else if((n2>n1)&&(n2>n3))
   {
   		printf("n2 is greater");
   }
   else
   {
   		printf("n3 is greater");
   }
	return 0;
}

