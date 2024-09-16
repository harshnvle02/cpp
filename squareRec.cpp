#include<iostream>
using namespace std;

bool checkIsSquare(int num, int count)
{
   if(count == num)
   {
     return false;
   } 
   else if(num / count == count)
   {
    return true; 
   }

   checkIsSquare(num, count+1);
}
int main()
{
    int num;
    bool isSquare;

    cout<<"enter the no:";
    cin>>num;

    isSquare = checkIsSquare(num, 2);
    
    if(isSquare)
    {
        cout<<"Is perfect square";
    }
    else
    {
        cout<<"It is not";
    }
}