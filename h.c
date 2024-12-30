#include<stdio.h>
int main()
{
	int num,ans;
	int*pnum;
	pnum=&num;
	printf("Enter the number");
	scanf("%d",pnum);
	ans=*pnum%2;
	if(ans==0)
	printf("%d is even\n",*pnum);
	else
	printf("%d is odd\n",*pnum);

}
