#include<iostream>
using namespace std;

class Complex 
{
    private:
    float real;
    float imag;
    public:
    
    Complex()
    {
        real = 0;
        imag = 0;
    }
   Complex(float r, float i)
   {
       real=r;
       imag =i;
   }
    void display()
    {
        cout<<"Sum of complex numbers = "<<real <<" + "<<imag <<"i"<<endl;
    }
    friend Complex operator +(Complex ,Complex);
};

Complex operator +(Complex c1,Complex c2)
{
    Complex sum;
    sum.real= c1.real+c2.real;
    sum.imag=c1.imag+c2.imag;
    return sum;
}

int main()
{
   float r1,i1,r2,i2;
   
   cout<<"Enter the first complex number real and _Imaginary part :"<<endl;
   cin>>r1>>i1;
   Complex obj1(r1,i1);
   
   cout<<"Enter the second complex number real and _Imaginary part :"<<endl;
   cin>>r2>>i2;
   
   Complex obj2(r2,i2);
   
   Complex result;
   
   result =obj1+obj2;
   
   result.display();
   
}