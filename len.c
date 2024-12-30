#include<stdio.h>
#include<string.h>
int main()
{
 
 char ch1[10]="hello";
 
 char ch2[20]={'h','e','l','l','o','a','l','l','\0'};
 
 printf("string is %s\n",ch1);
 
 printf("string is %s",ch2);
 
 //length
 printf("length is %d",strlen(ch1));
 
    return 0;
}

