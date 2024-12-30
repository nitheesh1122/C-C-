#include<stdio.h>
struct employee
{
	char name[20];
	int empid;
	float salary;
};
int main()
{
	struct employee emp;
	printf("enter employee details :\n");
	printf("enter employee name:");
	gets(emp.name);
	printf("employee id:");
	fscanf("%d",&emp.empid);
	printf("employee salary:");
	fscanf("%f",&emp.salary);
	printf("\nenterded details is:\n");
	prin
}
