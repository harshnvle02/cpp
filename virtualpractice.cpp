#include<iostream>
using namespace std;

class a
{
    public:

    virtual void print()
    {
        cout<<"i am in derived";
    }
    virtual void print_Next()
    {
        cout<<"I am in base and non vitual func";
    }
};
class b : public a
{
    public:

    void print()
    {
        cout<<"I am in derived";
    }

    void print_Next()
    {
        cout<<"I am non virtual and am in derived";
    }
};
int main()
{
    a* aptr;

    b obj;

    aptr = &obj;

    aptr->print_Next();
    aptr->print();
}