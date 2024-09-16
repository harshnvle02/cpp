#include <iostream>
using namespace std;

class a
{
    int a = 10;

    friend class b;
};
class b
{
public:
    int b = 10;
    a obj2;
    void add()
    {
        cout << b + obj2.a;
    }
};
int main()
{
    b obj;
    obj.add();
}