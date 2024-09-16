#include<iostream>
using namespace std;

class a
{
    public:
    int a = 5;
    void add1()
    {
        cout<<"I am in A";
    }
};
class b: public a
{
    public:
    int b = 5;  

};
int main()
{
    b obj;
    obj.add();
}