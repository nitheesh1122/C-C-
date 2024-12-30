int main() 
{
    int num = 30;

    int *ptr; 
    ptr = &num; 

    printf("Value of num: %d\n", num);
    printf("Address of num: %d\n", &num);
    printf("Address of num: %p\n", ptr);

    printf("Value at the address stored in ptr: %d\n", *ptr);

    return 0;
}
