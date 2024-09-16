#include<iostream>
using namespace std;

int main()
{
    int a;
    int b;

    cout<<"Enter the first number:";
    cin>>a;

    cout<<"Enter the second number:";
    cin>>b;

   
    a = a + b;
    b = a - b;
    a = a - b;

    cout<<a;
    cout<<b;
}