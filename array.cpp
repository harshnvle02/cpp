#include<iostream>
#include<array>
using namespace std;

class printArray
{
    public:
    array<int,5> arr;
    
    array<int,5> userInput()
    {
        cout<<"Enter five numbers:"<<endl;

        for(int i = 0; i < 5; i++)
        {
            cin>>arr[i];

        }
        return arr;
        
    }
    void printSum()
    {
        int sum = 0;

        cout<<"sum is:";

        for(int j = 0; j < 5; j++)
        {
            sum = sum + arr[j];
        }

        cout<<sum;
    }
    
};
int main()
{
    
     printArray ar;
     array<int, 5> arr = ar.userInput();
     
     ar.printSum();

}