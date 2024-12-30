#include<iostream>
int main()
{
	int a=10 ,b=20,c=30;
	if ((a>b)&&(a>c))
	std::cout<<"a is greater";
	else if ((b>a)&&(b>c))
	std::cout<<"b is greater";
	else 
	std::cout<<"c is greater";
	return 0 ;
}
