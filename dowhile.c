#include<stdio.h>
int main()
{
	int a=1;
	do
	{
		printf("%d\n",a);
		a++;
	}
	while(a<5);//1<5
	
	return 0;
//even condition is wrong,executes atleast once
//otherwise works as a while loop
}

//1<5 1 1++--2
//2<5 2 2++--3
//3<5 3 3++--4
//4<5 4 4++---5
//5<5---false
