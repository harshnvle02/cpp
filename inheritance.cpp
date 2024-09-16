#include<iostream>
using namespace std;

class a
{
    public:
    void printA()
    {
        cout<<"I am in a";
    }
};
class b : public a
{
    public:
    void printB()
    {
        cout<<"I am in b";
    }
};

class c : public b
{
    void printC()
    {
        cout<<"I am in c";
    }
};
int main()
{
    c check;
    check.printA();
    return 0;
}
