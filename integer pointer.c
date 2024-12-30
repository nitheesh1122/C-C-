#include<stdio.h>
int main()
{
	int num=455;
	int *ptr;
	ptr=&num;
	printf("value of num\n",num);
	printf("address of num:%p\n",&num);
	printf("value at the address stored in ptr:%d\n",*ptr);
	printf("value at the address stored in ptr:%d\n",ptr);
	return 0;
}
