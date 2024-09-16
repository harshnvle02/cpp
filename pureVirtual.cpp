#include<iostream>
using namespace std;

class a
{
    public:

    int a = 40;

    virtual void print() = 0;
};
class b: public a
{
    int b = 30;
    
    void print()
    {

    }
}