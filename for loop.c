#include<iostream>
using namespace std;
int main()
{
	int i;
	float mark,sum=0,avg;
	cout<<"enter marks obtained in 3 subjects:";
	for(i=0;i<3;i++)
	{
		cin>>mark;
		sum=sum+mark;
	}
	avg =sum/3;
	cout<<"\ngrade=";
	if(avg>91 && avg<=100)
	cout<<"A1";
	else if(avg>71 && avg<81)
	cout<<"b1";
	else
	cout<<"invalid";
	cout<<endl;
	return 0;
}
