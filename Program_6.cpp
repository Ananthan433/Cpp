// program 6
#include<iostream>
using namespace std;
class student
{
    private:
    int student_id;
    char student_name[20];
    int n;
    int total=0;
    int marks[];
    void getdata()
    {
        cout<<"Enter your id"<<endl;
        cin>>student_id;
        cout<<"Enter your name"<<endl;
        cin>>student_name;
        cout<<"How many subjects"<<endl;
        cin>>n;
        cout<<"Enter your marks"<<endl;
        for (int i = 0; i < n; i++)
        {
            cin>>marks[i];
        }
        
    }
    public:
    void computemarks()
    {
        getdata();
        for (int i = 0; i < n; i++)
        {
            total=total+marks[i];
        }
    }

        void printdata()
        {
        cout<<"Student id:"<<student_id<<endl;
        cout<<"Student name:"<<student_name<<endl;
        cout<<"Number ofsubjects:"<<n<<endl;
        cout<<"The total marks="<<total;
        }
    
    
}
student1;
int main()
{
    student1.computemarks();
    student1.printdata();
    return 0;
}