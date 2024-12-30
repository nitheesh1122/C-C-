#include<stdio.h>
	struct Address
	{
		char city[10];
		char state[10];
	};
	
	
	struct Person
	{
	char name[10];
	int age;
	int dob;
	struct Address address;
	};
int main()
{
	struct Person person;
	printf("enter your name:");
	scanf("%s",person.name);
	
	printf("enter your age:");
	scanf("%d",&person.age);
	
	printf("enter your dob:");
	scanf("%d",&person.dob);
	
	printf("enter your city:");
	scanf("%s",person.address.city);
	
	printf("enter your state:");
	scanf("%s",person.address.state);
	
	printf("\n person details:\n");
	printf("name:%s\n",person.name);
	printf("age:%d\n",person.age);
	printf("dob:%d\n",person.dob);
	printf("city:%s\n",person.address.city);
	printf("state:%s\n",person.address.state);
	
	return 0;
	
}

