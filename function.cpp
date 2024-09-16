#include <iostream>
using namespace std;

int main()
{
    int num1;
    int num2; 

    cout<<"Enter the first no: ";
    cin>>num1;

    cout<<"Enter the second no: "<<num1;
    cin>>num2;

    swap(&num1, &num2);

    cout<<num1;
    cout<<num2;

    return 0;
}

void swap(int *num1, int *num2)
{
    int *num3;

    num3 = num1;
    num1 = num2;
    num2 = num3;


}
