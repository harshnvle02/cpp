#include<iostream>
using namespace std;

int main()
{
    int size;

    cout<<"Enter the size:";
    cin>>size;
    
    int arr[size];

    cout<<"enter the elements:";
    cin>>size;
    
    for(int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    
    int count = 1;

    int max = arr[0];

    for(int  j = 1; j < size; j++)
    {
        if(arr[j] > max)
        {
            count++;
            max = arr[j];
        }
    }

    cout<<count;
}