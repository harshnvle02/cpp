#include <iostream>
using namespace std;
int main ()
{
  int n, j = 0;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++)
  {
    cin >> a[j];
    if (a[j] != 0)
    {
        j++;
    }
  }
  for (int i = 0; i < j; i++)
  {
      cout << a[i] << " ";
  }
  for(int i = j; i < n; i++)
  {
     cout<<0<< " ";
  }
}