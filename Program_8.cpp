// program 8
#include <iostream>
using namespace std;
class MyClass {
public:
    static int count; // static data member
    MyClass() {
        count++;
    }
    ~MyClass() {
        count--;
        cout<<"Number of objects now:"<<count<<endl;
    }
}
obj1,obj2,obj3
;
int MyClass::count = 0; // initializing static data member
int main() {

    
    cout << "Number of objects created: " << MyClass::count << endl;
    MyClass obj4;

    return 0;
}
