#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct stackArray
{

    stack<int>stack;

    void pushFunc(int x)
    {
        stack.push(x);
    }

    int popFunc()
    {
        int top = stack.top();
        stack.pop();

        return top;
    }
};
int main()
{
    int size;

    cout << "Enter the size:";
    cin >> size;

    stackArray s;

    int arr[size];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
        s.pushFunc(arr[i]);
    }

    cout<<"reverse is:"<<endl;

    for(int i = 0; i < size; i++)
    {
        cout<<s.popFunc()<<endl;
    }
}