
#include <iostream>
using namespace std;
class Box {
    private:
        int length;
        int breadth;
        int height;
    public:
        // constructor with no parameters
        Box() {
            length = 0;
            breadth = 0;
            height = 0;
        }

        // constructor with one parameter
        Box(int len) {
            length = len;
            breadth = len;
            height = len;
        }

        // constructor with three parameters
        Box(int len, int bre, int hei) {
            length = len;
            breadth = bre;
            height = hei;
        }

        int getVolume() {
            return length * breadth * height;
        }
};

int main() {
    Box box1; 
    Box box2(5); 
    Box box3(10, 5, 15); 

    cout << "Volume of box1: " << box1.getVolume() << endl;
    cout << "Volume of box2: " << box2.getVolume() << endl;
    cout << "Volume of box3: " << box3.getVolume() << endl;

    return 0;
}