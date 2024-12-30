#include<stdio.h>
struct per
{
	int a;
	float b;
	char ch[10];
}cr;

union per1
{
	int a1;
	float b1;
	char ch1[10];
}hs;
int main()
{
	
	printf("memory of structure id %d bytes",sizeof(cr));
	printf("memory of union id %d bytes",sizeof(hs));
	return 0;
}

