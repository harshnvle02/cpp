#include<iostream>
using namespace std;

void checkPrime(int num)
{
    if(num == 2)
    {
        cout<<"It is prime";
    }
    else
    {
        int flag = 0;

        for(int i = 2; i < num; i++)
        {
            if(num % i == 0)
            {
                flag = 1;
                break;
            }
        }
        if(flag == 1)
        {
            cout<<"It is prime";
        }
        else
        {
            cout<<"It is not a Prime no";
        }
    }
}
int main()
{
    int num;

    cout<<"Enter the num: ";
    cin>>num;

    checkPrime(num);
    return 0;
}