#include<stdio.h>
int main()
{
	int a=10;
	while(a<5)//1<5
	{
		printf("%d\n",a);
		a++;
	}
	return 0;
}

//1<5 1 1++--2
//2<5 2 2++--3
//3<5 3 3++--4
//4<5 4 4++---5
//5<5---false
