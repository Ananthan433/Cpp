#include<iostream>
using namespace std;
class mean
{
    private:
    int a,b,c;
    float sum,avg;

    public:
    void getdata();
    friend void avgCal();
}Avg1;//object
void avgCal()
{
    Avg1.sum=Avg1.a+Avg1.b+Avg1.c;
    Avg1.avg=Avg1.sum/3;
    cout<<"The average of "<<Avg1.a<<","<<Avg1.b<<","<<Avg1.c<<" is:"<<Avg1.avg;
}

void mean ::getdata()
{
    cout<<"Enter 3 numbers"<<endl;
    cin>>a>>b>>c;
    avgCal();
}

int main()
{
    Avg1.getdata();
    return 0;
}
