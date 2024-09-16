#include<iostream>
using namespace std;

int fibonacci(int num1, int num2, int nextTerm, int end)
{
    if(nextTerm <= end)
    {
        return nextTerm;
    }
    
    nextTerm = num1 + num2;
     
    fibonacci(num2,nextTerm, num1, end);

    cout<<nextTerm;
    
}
int main()
{
    int num1 = 0, num2 = 1, nextTerm = 0, end, result;

    cout << "Enter a positive number: ";
    cin >> end;

    result = fibonacci(num1 , num2, nextTerm, end);
    cout<<result;
}