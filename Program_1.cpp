//Program 1 (Function Overloading)
#include <iostream>
#include <string>
using namespace std;
class Volume{
  private:
  int vol_cube,vol_cuboid;
  float vol_sphere;
  public:
  void volume(int a)//Cube
  {
    vol_cube = a*a*a;
    cout<<"Volume of the cube="<<vol_cube<<"l"<<endl;
  }
  
  void volume(int l,int b,int h)//Cuboid
  {
    vol_cuboid = l*b*h;
    cout<<"Volume of Cuboid="<<vol_cuboid<<"l"<<endl;
  }
  void volume(float r)//sphere
  {
    vol_sphere = (4/3)*3.14*r*r*r;
    cout<<"Volume of sphere="<<vol_sphere<<"l";
  }
  
}
cube,cuboid,sphere;
;
int main() 
{
  int a,l,b,h;
  float r;
  cout<<"Enter the side of the cube"<<endl;
  cin>>a;
  cout<<"Enter the sides of the cuboid"<<endl;
  cin>>l>>b>>h;
  cout<<"Enter the radius of the sphere"<<endl;
  cin>>r;
  cube.volume(a,a,a);
  cuboid.volume(l,b,h);
  sphere.volume(r);
  return 0;
}

