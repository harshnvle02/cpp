#include <iostream>
using namespace std;

class binary
{
public:
    bool binarySearch(int size)
    {
        int arr[size];

        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }

        int num = 0;

        cout << "enter the number you want:";
        cin >> num;

        int start = 0;
        int end = size - 1;

        while (start <= end)
        {
            int mid = (start + end) / 2;
            
            if (arr[mid] == num)
            {
                cout << "No found at: " << start + 1 << endl;
                return true;
            }
            if (num < arr[mid])
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
            // if (arr[mid] > num)
            // {
            //     cout << "no found at: " << end + 1 << endl;
            //     return true;
            // }

            // mid = (start + end) / 2;

            // if (num == arr[mid])
            // {
            //     cout << "number found at " << mid + 1;
            //     return true;
            // }
            // else
            // {
            //     if (num < mid)
            //     {
            //         end = mid - 1;
            //     }
            //     else
            //     {
            //         start = mid + 1;
            //     }
            // }
        }

        return false;
    }
};
int main()
{
    while(true)
    {
    int size;

    cout << "Enter size:";
    cin >> size;

    binary bin;
    if (bin.binarySearch(size) == false)
    {
        cout << "no not found";
    };
    }
}