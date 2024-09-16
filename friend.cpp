#include<iostream>
using namespace std;

class a
{
    int name = 8;
    int age;

  friend void add(a);
};

void add(a obj2)
{
   cout<<obj2.name;
}

int main()
{
   a obj;
   add(obj); 
}