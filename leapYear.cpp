#include<iostream>
using namespace std;

bool check(int y)
{
    if(y % 4 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int year;
    bool isLeap;

    cout<<"enter the year :";
    cin>>year;

    isLeap = check(year);
    cout<<isLeap;
    

    return 0;
}

