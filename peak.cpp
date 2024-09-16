#include<iostream>
using namespace std;

class findingPeak
{
    public:

    void peakElement(int size)
    {
       int arr[size];
       int count = 0;
       int newArr[count];


       for(int  i = 0; i < size; i++)
       {
         cin>>arr[i];
       }

       for(int j = 1; j < size; j++)
       {
          if(arr[j] > arr[j+1] && arr[j] > arr[j-1])
          {
              newArr[count] = arr[j];
              count++;
          }
       }
       
       cout<<"Peakest elements:"<<endl;
       
       for(int i = 0; i < count; i++)
       {
           cout<<newArr[i]<<endl;
       }
    }
};
int main()
{
   int size;

   cout<<"Enter the size:";
   cin>>size;
    
   findingPeak obj;
   obj.peakElement(size);
}