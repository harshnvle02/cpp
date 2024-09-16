#include<iostream>
using namespace std;

class reverse
{
    public:
    int length = 0;
    int arr[];

    reverse(int size)
    {
        length = size;
        makeArray(length);
        SwapArray();
        printArray();
    }

   
    void makeArray(int size)
    {
       arr[length];
       for(int i = 0; i < length; i++)
       {
         cin>>arr[i];
       } 
    }

    void SwapArray()
    {
        int startIndex = 0;
        int endIndex = length-1;
        int midIndex = (startIndex + endIndex) / 2;

        while(startIndex <= midIndex)
        {
            int temp = 0;

            temp = arr[startIndex];
            arr[startIndex] = arr[endIndex];
            arr[endIndex] = temp;

            startIndex++;
            endIndex--;
        }
    }

    void printArray()
    {
       for(int i = 0; i < length; i++)
       {
         cout<<arr[i];
       } 
    }


};
int main()
{
    int size;

    cout<<"Enter size:";
    cin>>size;

    reverse obj(size);

}