#include<iostream>
using namespace std;

int main()
{
    int size;

    cout<<"Enter your size:";
    cin>>size;

    int arr[size];

    for(int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    
    int endIndex = size-1;

    while(endIndex > 0)
    {
        int i = 0;
        while(i  < endIndex)
        {
            if(arr[i+1] < arr[i])
            {
                int temp = 0;
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
                
            }
            i++; 
            
        }
        endIndex--;
    }


    for(int j = 0; j < size; j++)
    {
        cout<<arr[j]<<endl;
    }
}