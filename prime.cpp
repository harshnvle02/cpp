#include<iostream>
using namespace std;

int main()
{
    int j;

    cout<<2<<endl;//2 also a prime number

    for(int i = 3; i < 25; i++)//i ko 3 se shuru kia hr time pe i check hota rahega 
    {
        for( j = 2; j < i-1; j++)
        {
            if(i % j == 0)
            {
                break;
            }

        }

        if(j == i-1)
        {
            cout<<i<<endl;
        }

        

    }
}