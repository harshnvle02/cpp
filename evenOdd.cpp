#include<iostream>
using namespace std;

void checkEvenOdd(int num)
{
    if(num % 2 == 0)
    {
        cout<<"It is even";
    }
    else 
    {
        cout<<"It is odd";
    }
    
}
int main()
{
    int num;

    cout<<"Enter the num: ";
    cin>>num;

    checkEvenOdd(num);
    return 0;
}