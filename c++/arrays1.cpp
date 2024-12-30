#include<iostream>
int main ()
{	int i,j;
	int arr[2][5]={{3,5,7,9,11},{13,15,17,19,21}};
	for(i=0;i<2;i++)
	{
		for(j=0;j<5;j++)
		{
		
		std::cout<<arr[i][j]<<"\t";
	}
	
	std::cout<<"\n";
	}
	return 0;
}
