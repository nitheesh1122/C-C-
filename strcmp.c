#include<stdio.h>
#include<string.h>
int main()
{
	char ch1[20]=("hello");
	char ch2[20]=("hello");
	if(strcmp(ch1,ch2)==0)
	{
		printf("Strings are same");
	}
	else
	{
		printf("strings are not same");
	}
	return 0;
}
