#include<iostream>
using namespace std;

class Animal
{
   public :
   string animalSound;
   void makeSound()
   {
     cout<<animalSound;
   }
};
class Dog : public Animal
{
    public :

    string sound()
    {
        return "bark";
    }

     
};
class Cat: public Animal
{
    public :
    
    string sound()
    {
        return "mew";
    }
};

int main()
{
    Dog dg;
    dg.animalSound = dg.sound();
    dg.makeSound();
    
    Cat cat;
    cat.animalSound = cat.sound();
    cat.makeSound();

}