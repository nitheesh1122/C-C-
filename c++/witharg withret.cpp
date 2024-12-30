#include<iostream>
int addition(int,int);
int main()
{
	int a,b,c;
    c=addition(2,3);
    std::cout<<c;
    return 0;
}
int addition(int a,int b)
{
	return a+b;
}
