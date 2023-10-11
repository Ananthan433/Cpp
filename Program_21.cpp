#include<iostream>
using namespace std;
class student
{
    protected:
    int rollno;
    float mark1;
    float mark2;
    public:
    void getstd()
    {
        cout<<"Enter Roll No : ";
        cin>>rollno;
        cout<<"\n";
        cout<<"Enter Marks of Subject 1 : ";
        cin>>mark1;
        cout<<"\n";
        cout<<"Enter Marks of Subject 2 : ";
        cin>>mark2;
        cout<<"\n";

    } 
    void displaystd()
    {
        cout<<"Rollno = "<<rollno<<endl;
        cout<<"Mark1 = "<<mark1<<endl;
        cout<<"Mark2 = "<<mark2<<endl;
    
    }
};

class Talent
{
protected:
float sports,arts;
public:
void get()
{
    cout<<"Enter the grace mark of sports:"<<endl;
    cin>>sports;
    cout<<"Enter the grace mark of arts:"<<endl;
    cin>>arts;
}
    void display()
    {
        cout<<"Sports gracemarks = "<<sports;
        cout<<"Arts gracemarks= "<<arts;
    }

    int totalgracemark()
    {
        int totalgm;
        totalgm = sports+arts;
        return totalgm;
    }
};

class Achievements : public student,public Talent
{
    int totalm;
    int aggregat;
    public:
    void aggregate()
    {
        totalm = mark1+mark2;
        aggregat = totalm + totalgracemark();
    }
    void out()
    {
        cout<<"Total mark = "<<totalm;
        cout<<"Aggregate marks = "<<aggregat;
    }
    int totalgracemark()
    {
        int totalgm;
        totalgm = sports+arts;
        return totalgm;
    }
};

int main()
{
    Achievements obj;
    obj.getstd();
    obj.get();
    obj.totalgracemark();
    obj.aggregate();
    cout<<"----Details of the student----"<<endl;
    obj.displaystd();
    obj.display();
    obj.out();
    return 0;
}