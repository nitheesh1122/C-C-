#include<stdio.h>
int main()
{
int a=56;
int *p;
int **p1;
p=&a;
p1=&p;

printf("%d\n",*p);
printf("%d\n",**p1);
printf("%p\n",&p);
printf("%p\n",p1);

return 0;
}
