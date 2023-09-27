// Program 3
#include<iostream>
using namespace std;
class Calculate{
    private:
    float vol;
    public:
    inline void volume(int a)
    {
        vol=a*a*a;
        cout<<"Volume of the cube="<<vol;
    }
}cube
;
int main()
{   int a;
    cout<<"Enter the side of the cube"<<endl;
    cin>>a;
    cube.volume(a);
    return 0;
}