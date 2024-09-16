#include<iostream>
using namespace std;

class A
{
    public: 

    void add(int a, int b)
    {
        cout<<a+b;
    }
};
class B : public A
{
    public:
    
    void add(int a, int b)
    {
        cout<<a+b;
    }
};
int main()
{
    B b;
    b.add(4,6);
}