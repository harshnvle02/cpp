#include<iostream>
using namespace std;

int sumDigits(int num, int sum)
{
    if(num == 0)
    {
        return sum;
    }
    sum = sum + num % 10;

    sumDigits(num / 10, sum);
    
}
int main()
{
    int num; 
    int result;

    cout<<"Enter the no: ";
    cin>>num;

    result = sumDigits(num, 0);
    cout<<result;

}