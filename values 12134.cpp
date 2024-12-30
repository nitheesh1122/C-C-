# include<stdio.h>
int main()
{
 
 //without using 3rd variable
    int a=10,b=20,c;
    a=a-b;
    b=a+b;
    a=b-a;
    printf("a is %d\n",a);
    printf("b is %d\n",b);
	
	//with using 3rd variable
c=a;
a=b;
b=c;
printf("a is %d\n",c);
printf("b is %d\n",a);
return 0;
}

