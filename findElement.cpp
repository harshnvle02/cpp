#include <iostream>
using namespace std;

class findoo
{
public:
    bool findElement(int size)
    {
        int arr[size];

        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }

        int num;
        cout << "Enter the number you want to find:";
        cin >> num;

        int j = 0;

        for (j = 0; j < size; j++)
        {
            if (num == arr[j])
            {   
                cout<<"No found at index:"<<j+1;
                return true;
            }
        }
        if(j == size)
        {
            return false;
        }
        
    }
};
int main()
{
    int size;
    int num;

    cout << "Enter size of an array:";
    cin >> size;

    findoo obj;
    if(obj.findElement(size) == false)
    {
        cout<<"not found";
    }
    
}