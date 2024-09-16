#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct middleEle
{
    stack<int> stack1, stack2;
    int count = 0;

    void pushFun(int num)
    {
        stack1.push(num);
        count++;
    }

    void removeMiddle()
    {
        int mid = count / 2;

        while (count != mid)
        {
            stack2.push(stack1.top());
            stack1.pop();

            count--;
        }

        stack1.pop();

        while (stack2.empty())
        {
            stack1.push(stack2.top());
            stack2.pop();
        }
    }

    void printStack()
    {
        while (!stack1.empty())
        {
            cout << stack1.top() << endl;
            stack1.pop();
        }
    }
};
int main()
{
    int size;

    cout << "Enter the size:";
    cin >> size;

    middleEle obj;

    int arr[size];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
        obj.pushFun(arr[i]);
    }

    obj.removeMiddle();

    cout << "print stack:";

    obj.printStack();
}