// #include<iostream>
// using namespace std;

// int main()
// {
    

//     for(int i = 5; i <= 8; i++)
//     {
//         int multi = i;
//         for(int j = i-1; j >0 ; j--)
//         {
//             multi = multi*j;
//         }

//         cout<<i<<":"<<multi<<endl; 
        
//     }
// }

#include<iostream>
using namespace std;

int main()
{
    int a = 10;
    int b = 20;

    a = a+b;
    b = a - b;
    a = a - b;

    cout<<a<<endl;
    cout<<b<<endl;
}