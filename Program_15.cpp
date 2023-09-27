#include<iostream>
using namespace std;

class Complex
{
public:
  float imag;
  float real;

  void getdata();

  friend Complex sumofcomplex(Complex &, Complex &);
};

void Complex::getdata()
{

  cin >> real >> imag;
}

Complex sumofcomplex(Complex & obj1, Complex & obj2)
{
  Complex sum;

  sum.real = obj1.real + obj2.real;
  sum.imag = obj1.imag + obj2.imag;

  return sum;
}

int main ()
{
  Complex obj1, obj2;


  cout <<"Enter the first real and Imaginary value : "<<endl;
  obj1.getdata();
  cout << "Enter the second real and Imaginary value: "<<endl;
  obj2.getdata();

  Complex result;

  result = sumofcomplex(obj1, obj2);

  cout << "sum = " << result.real << "+" << result.imag<<"i";
  
  return 0;
}