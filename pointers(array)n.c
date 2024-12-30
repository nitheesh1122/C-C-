#include <stdio.h>
int main() 
{ 
    int i;
    int *arr[50] = {10, 20, 30, 40, 50};

    for (i= 0; i < 5; i++)
    {
        printf("Value at index %d: %p\n",*(arr + i)); 
        printf("Value at index %d: %d\n",*(arr + i));
        printf("Value at index %d: %d\n",i,*(arr + i));
    }
    return 0;
}

