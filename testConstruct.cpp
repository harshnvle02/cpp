#include<iostream>
using namespace std;

class Constructor
{
    public:

    Constructor()
    {
        cout<<"hello world";
    }
    Constructor(int a, int b)
    {
        cout<<a+b;
    }
};
int main()
{

    Constructor cons(2,3);
    

}