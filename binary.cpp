#include<iostream>
using namespace std; 

int main()
{
    int num;
    int count = 0;
    int arr[count];
    int sum = 0;

    cout<<"Enter the number:";
    cin>>num;

    while(num != 0)
    { 
        arr[count] = num % 2;
        count++;

        num = num / 2;
    }

    int count1 = 1;
    
    for(int i = count-1; i >= 0; i--)
    {
        
       if(arr[i] == 1)
       {
        sum = sum + count1;
       }
       count1 = count1* 2;
    }

    cout<<sum;
}