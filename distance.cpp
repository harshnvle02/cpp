#include<iostream>
using namespace std;

class Point
{
    public:

    int x;
    int y;
};
class Distance: public Point
{
    public :

    void calculateDistance()
    {
        cout<<x-y;
    }
};
int main()
{
    int a,b;
    cout<<"start end";
    cin>>a>>b;
    Distance dist;
    dist.x = a;
    dist.y = b;
    dist.calculateDistance();
}