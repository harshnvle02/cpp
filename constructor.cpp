#include<iostream>
using namespace std;

class construct
{
    int c =10;
    public:   
    construct()
    {
        cout<<c<<"in default"<<endl;
    }
    construct(construct &t)
    {
      cout<<c<< "in copy";
    }
    
};
int main()
{
    construct obj; // default coonst


    construct obj1(obj); // object is passing as parameter to the same class of constructor

    //construct obj1;
    //obj1 = obj;
}