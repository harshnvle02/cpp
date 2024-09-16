#include<iostream>
using namespace std;

int main()
{
    int num1;
    int num2;
    int hcf = 1;

    cout<<"Enter first no: ";
    cin>>num1;

    cout<<"Enter second no: ";
    cin>>num2;

    int min = num1 > num2 ? num2 : num1;

    for(int i = 2; i < min; i++)
    {
         if(num1 % i == 0 && num2 % i == 0)
         {
            hcf = hcf * i;
         }
    }


    cout<<hcf;
}