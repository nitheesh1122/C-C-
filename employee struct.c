#include<stdio.h>
#include<conio.h>
struct employee
{
	char name[50];
	int empid;
	float salary;
}e;
int main()
{
	struct employee emp;
	printf("\n enter employee details !\n");
	printf("\n name:");
	gets(emp.name);
	printf("\n id:");
	scanf("%d",&emp.empid);
	printf("\n salary:");
	scanf("%f",&emp.salary);
	printf("\n entered employee details are!");
	printf("\n name:%s",emp.name);
	printf("\n id:%d",&emp.empid);
	printf("\n salary:%f",&emp.salary);
	return 0;
}
