#include<stdio.h>
#include<string.h>
int main() 
{
    char a[20]="fghjk";

    char *ptr; 
    ptr = &a; 

    printf("Value of chr: %s\n",a);
    printf("Address of chr: %d\n", &a);
    printf("Address of chr: %p\n", ptr);

    printf("Value at the address stored in ptr: %d\n", *ptr);

    return 0;
}
