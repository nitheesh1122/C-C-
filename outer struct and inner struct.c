#include<stdio.h>
struct Address
{
	char city[20];
	char state[20];
};
struct Person
{
	char name[50];
	int age;
	struct Address address;
};
int main()
{
	struct Person p;
	
	printf("enter the name :");
	scanf("%s",p.name);
	printf("enter age:");
	scanf("%d",&p.age);
	printf("enter city:");
	scanf("%s",&p.address.city);
	printf("enter state:");
	scanf("%s",&p.address.state);
	
	
	printf("\nPerson details:\n");
	printf("name:%s\n",p.name);
	printf("age:%d\n",p.age);
	printf("city:%s\n",p.address.city);
	printf("state:%s\n",p.address.state);
	
	return 0;
}
