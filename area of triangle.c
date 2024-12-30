#include <stdio.h>
int area(b,h)
{   int aot;
    aot = (b*h)/2;
    return (aot);
}
void main()
{
  int b, h;

  printf("Enter base and hight of a triangle\n");
  scanf("%d %d", &b,&h);

  printf("Area of the triangle = %d\n",area(b,h));
}
