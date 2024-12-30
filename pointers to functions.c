#include <stdio.h>

int multiply(int a, int b) 
{
    return a * b;
}

int main() 
{
    int (*func_ptr)(int a, int b ); 
    func_ptr = multiply; 

    int result = func_ptr(3, 7); 
    printf("address: %p\n", result);
    printf("Result: %d\n", result);

    return 0;
}
