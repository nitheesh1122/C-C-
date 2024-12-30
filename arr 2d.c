#include<stdio.h>
int main()
{
	int i,j;
	int arr[3][3]={{10,20,30},{50,60,70},{90,40,80}};
	for(i=0;i<6;i++)
	{
		for(j=0;j<6;j++)
		{
			printf("[%i][%i]",i,j);
			printf("%d\n",arr[i][j]);
		}
	}
	return 0;
}
