#include <iostream>
using namespace std;

class separate
{
public:
    void separation(int size)
    {
        int arr[size];
        int count0 = 0;
        int count1 = 0;

        cout << "Enter elements:" << endl;

        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }

        for(int i = 0; i < size; i++)
        {
           if(arr[i] == 0)
           {
             count0++;
           }
           else
           {
             count1++;
           }
        }

        if(arr[0] == 0)
        {
            int i;
            for(i = 0; i < count0; i++)
            {
                arr[i] = 0;
            }
            for(int j = i; j < size; j++)
            {
                arr[j] = 1;
            }
        }
        else
        {
            int i;
            for(i = 0; i < count1; i++)
            {
                arr[i] = 1;
            }
            for(int j = i; j < size; j++)
            {
                arr[j] = 0;
            }
        
        }

        cout << "Array is:";

        for (int i = 0; i < size; i++)
        {
            cout << arr[i];
        }
    }
};
int main()
{
    int size;

    cout << "enter the size of the array:";
    cin >> size;

    separate obj;
    obj.separation(size);
}