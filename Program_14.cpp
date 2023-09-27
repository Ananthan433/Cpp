#include<iostream>
using namespace std;
class classB;
class classA
{
    private:
    int a;
    public:
    void getdata();
    void display();
    friend void swap(classA &obj1,classB &obj2);
}objA;
class classB
{
    private:
    int b;
    public:
    void getdata();
    void display();
    friend void swap(classA &obj1,classB &obj2);
}objB;

void classA :: getdata()
{
    cout<<"Enter the number of first class"<<endl;
    cin>>a;
}

void classB :: getdata()
{
    cout<<"Enter the number of second class"<<endl;
    cin>>b;
}

void classA :: display()
{
    cout<<"The number of class A is now:"<<a<<endl;
}
void classB :: display()
{
    cout<<"The number of class B is now:"<<b;
}
// Freind function definition

void swap(classA &obj1 , classB &obj2)
{   
    int temp = obj1.a;
    obj1.a = obj2.b;
    obj2.b = temp;
}

int main()
{
    objA.getdata();
    objB.getdata();
    swap(objA,objB);
    objA.display();
    objB.display();
    return 0;
}
