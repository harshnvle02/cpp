#include<iostream>
using namespace std;

class Car
{
    public:
    int doors;
    int wheels;

    virtual void drive()
    {
        cout<<"Car can drive";
    }
};
class Bmw : public Car
{
    public:

    void drive()
    {
        cout<<"Bmw can drive";
    }
};
int main()
{
    Car *ptr = new Car;
    ptr->drive();
}
