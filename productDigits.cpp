#include <iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter the num:";
    cin>>num;
    int digit = 0;

    int product = 1;

    while(num != 0)
    {
        digit = num % 10;

        product = product * digit;

        num = num / 10;  
    }

    cout<<"result:"<<product;
}