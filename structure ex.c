#include<stdio.h>
struct data
{
	int a;
	float f;
	char str[20];
}sr;
int main()
{
	struct data Data;
	Data.a=243;
	printf("data.a: %d\n ",Data.a);
	Data.f=234.09;
	printf("data.f: %f\n ",Data.f);
	strcpy(Data.str,"A.D");
	printf("data.str: %s\n ",Data.str);
	return 0;
}

