#include<stdio.h>
int add(int a,int b)
{
	return a+b;
}
int main()
{
	int (*func_ptr)(int,int);
	func_ptr = add;
	
	int result=func_ptr(5,7);
	printf("result:%d\n",result);
	return 0;
}
