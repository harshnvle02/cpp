#include <iostream>
using namespace std;

class A
{
    int age;
    string name, gender;

    public:

    A()
    {
        cout<<"enter name, age and gender";
        cin>>name>>age>>gender;

        cout<< "MY name is : " << name << "  and age is " << age << "  and gender is " << gender;
    }
} ;
class B : public A{
    public:
    B()
    {
        cout <<"B";
    }
};
class C : public B{
    public:
    C()
    {
        cout <<"C";
    }
};
int main()
{
    C obj; //custructor will call automatically
}