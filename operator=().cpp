#include<iostream>
#include<string.h>

using namespace std;

class String1
{
    int len;
    char* ptr;
    
    public:

    String1(int len, char *ptr)
    {

        this->len = len;
        

        this->ptr = new char[len+1];

        strcpy(this->ptr, ptr);

    }

    String1& operator=(String1 &s)
    {

        this->len = s.len;
        delete[] ptr;

        this->ptr = new char[len + 1];
        strcpy(this->ptr, s.ptr);

        return (*this);

    }

    ~String1()
    {
        delete [] ptr;
    }

    void display()
    {
        cout<<ptr;
    }
};
int main()
{
    String1 s1(5, "Rahul");
    String1 s2(5, "Rohit");

    s1.operator=(s2);
    s1.display();
    
}