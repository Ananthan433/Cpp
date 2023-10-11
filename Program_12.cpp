#include<iostream>
using namespace std;
class Time
{
    int hours,minutes;
    public:
    void gettime(int h,int m)
    {
        hours = h;
        minutes = m;
    }
    void puttime()
    {
        cout<<hours<<"Hours and "<<minutes<<"minutes";
    }
};
