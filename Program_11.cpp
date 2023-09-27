// program 11
#include <iostream>
using namespace std;
class Time 
{
private:
    int h1,m1,s1;//First Time
    int h2,m2,s2;//Second Time
    int rh,rm,rs;//Result time
public:
void Time_get(); //Function to input time
void Time_cal(); //Funtion to calcule time
void Time_put(); //Function to print time

};

void Time :: Time_get()
{
    cout<<"Enter the first time"<<endl;
    cin>>h1>>m1>>s1;
    cout<<"Enter the second time"<<endl;
    cin>>h2>>m2>>s2;
    Time_cal();
    Time_put();
}

void Time :: Time_cal()
{
    rs=s1+s2;
    rm=m1+m2;
    rh=h1+h2;
    if(rs>=60)
    {
        rs=rs-60;
        rm++;
       
    }
    if(rm>=60)
    {
            rm=rm-60;
            rh++;
    }
    
}

void Time :: Time_put()
{
    cout<<"Time is "<<rh<<":"<<rm<<":"<<rs;
}
int main()
{
    Time t;
    t.Time_get();
    return 0;
}
