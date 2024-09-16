#include<iostream>
using namespace std;

class A
{
    int a = 10;
    public:
    A(A &t)
    {
        cout<<t.a;
    }
    A(int a)
    {
        cout<<a<<endl;
    }
};
int main()
{
    A obj(4);

    A obj1(obj);
}