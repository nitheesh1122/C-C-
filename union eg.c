#include<stdio.h>
union data
{
	int a;
	float f;
	char str[20];
}hs;
int main()
{
	union data data;
	data.a=12;
	printf("data.a: %d\n ",data.a);
	data.f=220.5;
	printf("data.f: %f\n ",data.f);
	strcpy(data.str,"c programming");
	printf("data.str: %s\n ",data.str);
	return 0;
}

