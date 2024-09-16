#include<iostream>
using namespace std;

int main()
{
   int size;

   cout<<"Enter the size of the array:" ;
   cin>>size;

   int arr[size];

   for(int i = 0; i < size; i++)
   {
     cin>>arr[i]; 
   }

   for(int  j = 0 ; j < size; j++)
   {
      int minIndex = j;
       
      for(int k = j+1; j < size; j++)
      {

        if(arr[j] < arr[minIndex])
        {
            minIndex = k;
            int temp = 0;
            temp = arr[j];
            arr[j] = arr[minIndex];
            arr[minIndex] = temp;
        }
      }
   }
   for(int k = 0; k < size; k++)
   {
    cout<<arr[k]<<endl;
   }
}