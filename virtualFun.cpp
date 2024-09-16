#include<iostream>
using namespace std;

class Employee
{
    private:
    int salary;
    
    public:

    Employee(int salary)
    {
        this->salary = salary;
        cout<<"In Parent constructor"<<endl;
        cout<<salary;
    }
    virtual void findSalary()=0;
};
class Engineer : public Employee
{
    private:
    int id;
    int rank;
    int engSalary;

    public:
    Engineer(int salary, int id, int rank):Employee(salary)
    {
       this->id = id;
       this->rank = rank;
       this->engSalary = salary;
    }
     
     void findSalary()
    {
        engSalary = engSalary - 50000;
        cout<<"You are in engineers find salary";
    }
};

int main()
{
    Employee *emp;

    Engineer obj(2000, 3,1);

    emp = &obj;
    emp->findSalary();   
    
}