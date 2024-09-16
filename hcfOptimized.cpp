#include<iostream>
using namespace std;

int recursion(int num1, int num2)
{
   if(num2 != 0)
   {
     return recursion(num2, num1 % num2);
   }  
   else
   {
    return num1;
   }
}
int main()
{    
 
    int num1;
    int num2, hcf, min;

    cout<<"Enter first no: ";
    cin>>num1;

    cout<<"Enter second no: ";
    cin>>num2;
    
    min = num1 > num2 ? num2 : num1;

    hcf = recursion(num1, num2);
    cout<<hcf;

}