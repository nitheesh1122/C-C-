#include <stdio.h>

// Outer structure
struct Address 
{
    char city[50];
    char state[50];
};

// Inner structure
struct Person
 {
    char name[50];
    int age;
    struct Address address; 
};

int main()
 {
    struct Person person;

    
    printf("Enter name: ");
    scanf("%s", person.name);

    printf("Enter age: ");
    scanf("%d", &person.age);

    printf("Enter city: ");
    scanf("%s", person.address.city);

    printf("Enter state: ");
    scanf("%s", person.address.state);

    
    printf("\nPerson Details:\n");
    printf("Name: %s\n", person.name);
    printf("Age: %d\n", person.age);
    printf("City: %s\n", person.address.city);
    printf("State: %s\n", person.address.state);

    return 0;
}


