#include<iostream>
using namespace std;
class class2;
class class1
{
    private:
    int num1;
    public:
    void getdata1();
    friend void check(class1 obj1, class2 obj2);
    
}obj1;

class class2
{
    private:
    int num2;
    public:
    void getdata2();
    friend void check(class1 obj1, class2 obj2);
}obj2;

void class1 :: getdata1()
{
    cout<<"Enter the number of first class"<<endl;
    cin>>num1;
}

void class2 :: getdata2()
{
    cout<<"Enter the number of second class"<<endl;
    cin>>num2;
}

void check(class1 obj1, class2 obj2)
{
    if (obj1.num1>obj2.num2)
    {
        cout<<obj1.num1<<"is larger";
    }
    else
    {
        cout<<obj2.num2<<"is larger";
    }
}
int main()
{   obj1.getdata1();
    obj2.getdata2();
    check(obj1,obj2);
    return 0;
}
