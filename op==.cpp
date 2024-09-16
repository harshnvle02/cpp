#include<iostream>
#include<string.h>
using namespace std;

class String1
{
    char *str1;

    public:

    String1(char *str1)
    {
        this->str1 = str1;
    }

    bool operator==(String1 &s2)
    {
        if(this->str1 == s2.str1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
int main()
{
    String1 s1("Alto");
    String1 s2("Alto");

    if(s1 == s2)
    {
        cout<<"they are same";
    }
    else
    {
        cout<<"they are not";
    }
}
