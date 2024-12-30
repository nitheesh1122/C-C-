#include<stdio.h>
#include<string.h>
int main()
{
	char ch1[10]="nitheesh";
	char ch2[20]={'h','a','r','i','\0'};
	printf("string is %s \n",ch1);
	printf("string is %s \n",ch2);
	printf("string is %s \n",strupr(ch1));

	return 0;
	
}
