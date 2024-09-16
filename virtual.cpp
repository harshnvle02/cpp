#include <iostream>
using namespace std;

class base
{
public:
    virtual void x()
    {
        cout << "i am in virtual fuction x";
    }
    void y()
    {
        cout << "i am in y in base";
    }
};
class child : public base
{
public:
    void x()
    {
        cout << "i am in child's x";
    }
    void y()
    {

        cout << "i am in y of child";
    }
};
int main()
{
    base* bptr;
    child ch;

    bptr = &ch;

    bptr->x();
    bptr->y();

}