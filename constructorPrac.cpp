#include<iostream>
using namespace std;

class test
{
   public:

   int num1;
   int num2;

   ~test()
   {
     cout<<"Enter the num";
     cin>>num1;

     cout<<"Enter the second number";
     cin>>num2;

     cout<<num1+num2;
   }
};
class test2 : public test
{

    public:

    ~test2()
    {
        cout<<"i am in test 2";
    }

};

class test3 : public test
{
   public:

   ~test3()
   {
      cout<<"i am in test3";
   }
};
int main()
{
    test3 obj;
}