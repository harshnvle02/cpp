#include<iostream>
using namespace std;
class sorting
{
    public:
     int size = 0;

     sorting(int s)
     {
        size = s;
        cout<<"Enter element:";
        getElement(size);
     }
      
     int arr[size];

     void getElement(int size)
     {
        for(int i = 0; i < size; i++)
        {
         cin>>arr[i];

        }
     }
}
int main()
{
    int size;

    cout<<"Enter the size of an array:";
    cin>>size;

    sorting sort(size);
}