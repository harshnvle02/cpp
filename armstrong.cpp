#include <iostream>
using namespace std;

class armstrong_no
{
    int checkLength(int num)
    {
        int count = 0;

        while (num != 0)
        {
            num = num / 10;
            count++;
        }
        return count;
    }
    int power(int digit, int length)
    {
        int mul = 1;
        int i = 0;

        while (i < length)
        {
            mul = mul * digit;
            i++;
        }
        return mul;
    }

public:
    bool armstrong(int num)
    {
        int getLength = checkLength(num);
        int newNum = num;
        int sum = 0;
        int digit;

        while (num != 0)
        {
            int getMul = 1;
            digit = num % 10;
            getMul = power(digit, getLength);

            sum = sum + getMul;
            num = num / 10;
        }
        if(sum == newNum)
        {
            return true;
        }
        return false;
        
    }
};
int main()
{
    int num;
    armstrong_no arm;

    cout << "Enter num";
    cin >> num;

    if(arm.armstrong(num))
    {
        cout<<"it is armstrong";
    }
    else
    {
      cout<<"it is not armstrong";
    }
    return 0;
}