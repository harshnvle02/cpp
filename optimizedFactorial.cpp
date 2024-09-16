#include<iostream>
using namespace std;

int factorial(int num)
{
    if(num == 1)
    {
        return 1;
    }

    num = num * factorial(num-1);  
}

int main()
{
    int num;
    int result;

    cout<<"Enter the num: ";
    cin>>num;

    result = factorial(num);
    cout<<result;
    return 0;
}