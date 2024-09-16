#include<iostream>
using namespace std;

class Minmax
{
    public:

    void makeArray(int *arr, int size);
};

void Minmax::makeArray(int *arr, int size)
{
    int max = arr[0];

    for(int  i = 0; i < size; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }

    cout<<"maximum no is :"<<max;
}
int main()
{
    int size;

    cout<<"Enter the size:";
    cin>>size;

    int arr[size];

    for(int i = 0; i < size; i++)
    {
        
        cin>>arr[i];
    }

    Minmax obj;

    obj.makeArray(arr, size);
}