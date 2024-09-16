#include<iostream>
using namespace std;

class Animal
{
    public:

    void makeSound1()
    {
        cout<<"Animals makes sound";
    }
};
class Cat : public Animal 
{
    public:

    void makeSound()
    {
        cout<<"Cats do mew mew";
    }
};
int main()
{
    Cat cat;

    cat.makeSound1();
}