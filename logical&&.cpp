#include<iostream>
using namespace std;
int main()
{
	int age =18;
	bool isStudent=true;
	
	if(age>=18 && isStudent)
	{
	          cout << "you are eligible for a student discount."
		<<endl;
	}
	else
	{
		cout<<"you are not eligible for a student discount."
		<<endl;
	}
	return 0;
}
