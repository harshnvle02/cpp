#include<iostream>
using namespace std;

class test
{
    int a;
    int b;

    public :

    void set(int num, int num2)
    {
        a = num;
        b = num2;

    }

    void get()
    {
        cout<<a<<"\n";
        cout<<b;
    }
};
int main()
{
    test t;

    t.set(5, 4);
    cout<<"values are:";
    t.get();

}