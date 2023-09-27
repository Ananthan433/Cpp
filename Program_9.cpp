// program 9
#include <iostream>
using namespace std;
class MyClass {
private:
    static int count;  // static member variable
    static int a;
public:
    static void incrementCount() {  // static member function
        count++;
    }

    static void displayCount() {
        cout << "Count: " << count << endl;
    }
};

int MyClass::count = 0;  // initialize static member variable

int main() {
    MyClass::displayCount();  

    MyClass::incrementCount();
    MyClass::incrementCount();

    MyClass::displayCount();

    return 0;
}
