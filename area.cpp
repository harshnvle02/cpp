#include<iostream>
using namespace std;

class Shape
{
   public:
   int are = 0;
   void area()
   {
    cout<<are;
   }  
};

class Circle: public Shape
{
    public:

    int r = 0;

    int Cal()
    {
        return 3.14*r*r;
    }
};
class Rectangle: public Shape
{
   public:

   int l = 0;
   int b = 0;

   int Cal()
   {
     return l * b;
   }
}; 
int main()
{
     Circle cobj;
     cobj.r = 4;
     cobj.are= cobj.Cal();
     cobj.area();

     cout<<"\n";

     Rectangle rect;
     rect.l = 4;
     rect.b = 6;
     rect.are = rect.Cal();
     rect.area();
}