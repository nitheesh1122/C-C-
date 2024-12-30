#include<stdio.h>
#include<string.h>                                

int main()
{                                          
	char c;           
	printf("Enter the value ");
	scanf("%c",&c);
	if((c>='a'&& c<='z')||(c>='A' && c<='Z'))
	printf("The given value is alphabet",c);
	else if((c >= '0' && c <= '9'))
    printf("The given value is integer", c);
    else
	printf("The given value is special character",c);
	return 0;
}
