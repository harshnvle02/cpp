#include<iostream>
using namespace std;

 class vehicle
{
   private:

   int doorNum = 4;

   int numdoor()
   {
     cout<<4;
   }
   string wheelNum;
   string vehiclename = "alto";
};
class car : public vehicle
{
    public:

      void carName()
      {
        cout<<vehiclename;
      }
      void numDoors()
      {
        numdoor();
      }
};
int main()
{
   car c;
   c.carName();
   c.numDoors();

   return 0;
}