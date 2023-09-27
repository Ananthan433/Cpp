// Program_2
#include <iostream>
#include <string>
using namespace std;

class Interest
{
  private:
  float i;
  public:
  void interest(float p,float n,float r=10)
  {
    i=(p*n*r)/100;
    cout<<"Simple interest will be"<<i;
  }
};
Interest obj;
int main() 
{ char op;
  float p,n,r;
  cout<<"Enter the total amount"<<endl;
  cin>>p;
  cout<<"Enter the number of years"<<endl;
  cin>>n;
  cout<<"Do you want to change the interest rate press 'y' or 'Y' to change otherwise press 'n' or 'N'"<<endl;
  
  cin>>op;
  if(op=='y'||op=='Y')
  {
      cout<<"Enter the intrest rate (by default it is 10%)"<<endl;
      cin>>r;
      obj.interest(p,n,r);
  }
  else if (op=='n'||op=='N')
  {
    obj.interest(p,n);
  }
 
  
  return 0;
}
