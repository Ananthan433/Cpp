#include <iostream>
using namespace std;

class Complex
{
private:
    int real, imag;

public:
    Complex(int r = 0, int i = 0) : real(r), imag(i) {}

    Complex operator-()
    {
        Complex temp;
        temp.real = -real;
        temp.imag = -imag;
        return temp;
    }

    void display()
    {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main()
{
    int a,b;
    cout<<"Enter the values of a and b"<<endl;
    cin>>a>>b;

    Complex c1(a,b);

    // Use overloaded unary operator '-'
    Complex c2 = -c1;

    cout << "c1 = ";
    c1.display();

    cout << "c2 = ";
    c2.display();

    return 0;
}