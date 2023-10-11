#include<iostream>
using namespace std;
class Clock
{
    
    public:
    int hours,minutes,seconds;
    Clock Time(Clock t1, Clock t2)
    {
        Clock result;
        result.seconds = t1.seconds+t2.seconds;
        result.minutes = t1.minutes+t2.minutes;
        result.hours = t1.hours+t2.hours;
        if (result.seconds>=60)
        {
            result.seconds=result.seconds-60;
            ++result.minutes;
        }
        if (result.minutes>=60)
        {
            result.minutes=result.minutes-60;
            ++result.hours;
        }
        return result;
    }
};

int main()
{
    Clock t1,t2,ans;
    cout<<"Enter the first time"<<endl;
    cin>>t1.hours>>t1.minutes>>t1.seconds;
    cout<<"\n";
    cout<<"Enter the second time"<<endl;
    cin >> t2.hours >> t2.minutes >> t2.seconds ;
    ans=t1.Time(t1,t2);
    cout << "The sum of both the times is ::::  ";
    cout <<"Hours : "<<ans.hours<<":"<<"Minutes:"<<ans.minutes<<":"<<"Seconds :" <<ans.seconds;
    return 0;
}