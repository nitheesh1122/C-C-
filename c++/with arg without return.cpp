#include<iostream>
void add(int a,int b);
int main()
{
    int a,b;
    std::cout<<"\n enter the value of the A&B:";
    std::cin>>a>>b;
	add(a,b);
	return 0;
}
void add(int a,int b)
{
	int c;
	c=a+b;
	std::cout<<c;
}
