#include<iostream>
using namespace std;

class A
{

   public:
   int a = 10;

   protected:
   int id = 3;

};
class B :  protected A
{
     public:

     void display()
     {
        cout<<id;
     }
     
};
int main()
{
    B obj;
}