#include <iostream>
using namespace std;

class sample {
	const char* p;

public:
	// default constructor
	sample()
	{

		// allocating memory at run time
		p = new char[6];
		p = "sample";
	}

	void display() { cout << p << endl; }
};

int main()
{
	sample obj;
	obj.display();
}
