// program 4
#include<iostream>
using namespace std;
class check
{
    private:
    int max_num;
    public:
    int& max(int& num1, int& num2)
{
    return (num1 > num2) ? num1 : num2;
}
}obj;

int main()
{
    int a,b;
    cout<<"Enter 2 numbers"<<endl;
    cin>>a>>b;
    int& largest=obj.max(a,b);
    cout<<"The largest number is:"<<largest;
    return 0;
}

