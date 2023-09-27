// program 7
#include<iostream>
using namespace std;

class Employee
{
    int empid;
    char name[20];
    float basic_salary,da,ta,hra;
    float gross_salary;
    public:
    void getdetails()
    {
        cout<<"Enter your employee id   Eg:1034"<<endl;
        cin>>empid;
        cout<<"Enter your name"<<endl;
        cin>>name;
        cout<<"Enter your basic salary"<<endl;
        cin>>basic_salary;
    }
    int computesalary()
    {
        da=5*(basic_salary/100);
        ta=5*(basic_salary/100);
        hra=10*(basic_salary/100);
        gross_salary=basic_salary+da+ta+hra;
        return gross_salary;
    }

    void printdetails()
    {
        computesalary();
        float total=computesalary();
        cout<<"Your ID: "<<empid<<endl;
        cout<<"Your name: "<<name<<endl;
        cout<<"Your Basic salary: "<<basic_salary<<endl;
        cout<<"Your bonuses \nDA: "<<da<<" TA: "<<ta<<" HRA: "<<hra<<endl;
        cout<<"Your gross salary: "<<total<<endl;
        cout<<endl;
    } 
}Employee1,Employee2,Employee3;
;           

int main()
{                                       
    
    Employee1.getdetails();
     cout<<"\n\n";

    Employee2.getdetails();
     cout<<"\n\n";

    Employee3.getdetails();
     cout<<"\n\n";


    // printing details

    Employee1.printdetails();
    Employee2.printdetails();
    Employee3.printdetails();

    
    return 0;
}