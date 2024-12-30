#include<stdio.h>
struct data
{
	int a;
	float f;
	char str[10];
}sr;
int main()
{
	struct data data;
	data.a=570;
	printf("data.a:%d\n",data.a);
	data.f=23.5;
	printf("data.f:%f\n",data.f);
	strcpy(data.str,"hi");
	printf("data.str:%s\n",data.str);
	return 0;
}








