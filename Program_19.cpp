#include <iostream>

using namespace std;

class Base {
public:
  int a, b;
};

class Derived : public Base {
public:
  int c;

  Derived() {
    c = a * b;
  }

  void display() {
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
  }
};

int main() {
  Derived obj;
  obj.a = 10;
  obj.b = 20;

  obj.display();

  return 0;
}
