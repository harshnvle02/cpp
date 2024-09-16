#include<iostream>
using namespace std;

class Complex
{
    int real;
    int img;
    
    public:

    Complex()
    {
        real = img = 0;
    }

    Complex(int real, int img)
    {
        this->real = real;
        this->img = img;
    }

    Complex operator-(Complex &c)
    {
        Complex temp;
        temp.real = this->real-c.real;
        temp.img = this->img - c.img;

        return temp;

    }

    void display()
    {
        if(img < 0 )
        {
            cout<<real<<""<<img<<"i";
        }
        else
        {
            cout<<real<<"+"<<img<<"i";
        }
    }

};
int main()  
{
    Complex c1(3,2);
    Complex c2(4,3);
    Complex c3 = c1.operator-(c2);
    c3.display();
}

