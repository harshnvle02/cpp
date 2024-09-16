#include<iostream>
using namespace std;
class Armstrong
{
   public:

   void checkArm(int num, int length)
   {
    int newNum = num;

    int digit, i = 0, multi = 1, sum = 0;
    cout<<newNum;
       while(newNum != 0)
       {
         //cout<<newNum;
         digit = newNum % 10;
          multi = 1;
          i =0;
         while(i < length)
         {
            multi = multi * digit;
            i++;
         }
         //cout<<multi;

         sum = sum + multi;
         newNum = newNum / 10;
       }
        //cout<<sum;
       if(sum == num)
       {
        cout<<"it is armstrong";
       }
       else
       {
        cout<<"it is not";
       }
   }
   int checkLength(int num)
   {
     int count = 0;

     while(num>0)
     {
         num = num / 10;
         count++;
     }
     return count;
   }
};
int main()
{
  int num;
  int length;

  cout<<"enter the number";
  cin>>num;

  Armstrong arm;
  length = arm.checkLength(num);
  cout << length;
  arm.checkArm(num, length);


  return 0;
}