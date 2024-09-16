#include<iostream>
using namespace std;

/*void factorial(int num)
{
    int multi = 1;

    for(int  i = 1; i <= num; i++)
    {
       multi = multi * i;
    }
    cout<<multi;
}*/
int factorial(int num, int multi)
{
    if(num == 1)
    {
        return multi;
    }

    multi = multi * num;

    factorial(num-1 , multi);
}

int main()
{
    int num;
    int result;

    cout<<"Enter the num: ";
    cin>>num;

    result = factorial(num, 1);
    cout<<result;
    return 0;
}