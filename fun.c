#include<stdio.h>
//without args,without return type
void message();//fun.declaration
int main()
{
     message();//fun.calling
     printf(" welcome to functions");
     return 0;	
}
void message()//fun.definition
{
    printf("helllo functions");	
}
