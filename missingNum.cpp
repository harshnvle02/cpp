#include <iostream>
using namespace std;

int main()
{
    int size;

    cout << "Enter the size of an array:";
    cin >> size;

    int arr[size];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int min = 9000;
    int sum = 0;
    int sum2 = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
        sum = sum + arr[i];
    }

    cout << min << endl;

    int num = min + size;
    while (min <= num)
    {
        sum2 = sum2 + min;
        min++;
    }

    cout << "missing number is : " << sum2 - sum << endl;
}