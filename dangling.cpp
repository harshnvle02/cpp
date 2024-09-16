#include <iostream>
using namespace std;

class Dangptr
{
    public:

    int length = 0;
    int *ptr;

    Dangptr(int length)
    {
        this->length = length;
        ptr = new int;

        *ptr = 4;
    }

    void show()
    {
        cout<<*ptr;
        //delete ptr;
    }

    // ~Dangptr()
    // {
    //     delete ptr;
    // }

    
};
int main()
{
    Dangptr obj(3);
    
    {
        Dangptr obj2(obj); 
    
    }

    obj.show();
}