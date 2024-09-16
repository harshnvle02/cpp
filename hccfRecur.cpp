#include<iostream>
using namespace std;

int num1;
int num2;

int recursion(int count, int min, int hcf)
{
   if(count > min)
   {
      return hcf;
   }
   
   if(num1 % count == 0 && num2 % count == 0)
   {
      hcf = count;
   }

   recursion(count+1, min, hcf);
   
}
int main()
{    
 
    int hcf;
    int min;

    cout<<"Enter first no: ";
    cin>>num1;

    cout<<"Enter second no: ";
    cin>>num2;
    
    min = num1 > num2 ? num2 : num1;

    hcf = recursion(2,min,1);
    cout<<hcf;

}