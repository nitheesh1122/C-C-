#include <iostream>

int main() 
{
  int a=100,b=5;
    std::cout << "addition is "<< a+b;
    std::cout << "\nsubtraction is "<< a-b;
    std::cout << "\nmultiplication is "<< a*b;
    std::cout << "\nquotient is "<< a/b;
    std::cout << " \nremainder is "<< a%b;
    
    //relational  0---false,1--true
    
      std::cout<<"\n ans is "<< (a>b);
      std::cout<<"\n ans is "<< (a<b);
      
      //logical
      
      int c=(a<b)&&(a>b);
      std::cout<<"\n ans is "<< c;
      
      int d=(a<b)||(a>b);
      std::cout<<"\n ans is "<< d;
      
      //not----inverse of output
       int e=!(a>b) ;
      std::cout<<"\n ans is "<< e;
      
      //conditional or ternary---- ?:  
      int f=(a>b)?a:b;
       std::cout<<"\n ans is "<< f;
       
      bool g=(a>b)?"true":"false";
      std::cout<<"\n ans is "<< g;
      
      //bitwise
      int h=(a&b);
      std::cout<<"\n ans is "<< h;
      
      int c1=(a|b);
      std::cout<<"\n ans is "<< c1;

    return 0;
}
