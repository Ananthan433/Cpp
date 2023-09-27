// program 10
#include<iostream>
using namespace std;

class Employee
{
int age;
char name[30];
public:
void getdata();
void putdata();
};

void Employee::getdata()
{
    cout << "Enter your name : ";
    cin >> name;
    cout << "Enter Your age : ";
    cin >> age;

}

void Employee::putdata()
{   cout << name << " ";
    cout << "(" << age << ")";
    cout << endl;
}

// Main

int main()
{
// Managers

Employee man[30];
int m, i;
cout << "Enter Number of Managers - ";
cin >> m;

for(i = 0; i < m; i++)
	man[i].getdata();

// Foremans

Employee foreman[30];
int f, j;
cout << "Enter Number of Foremans - ";
cin >> f;
for(j = 0; j < f; j++)
	foreman[j].getdata();

// Workers

Employee wor[30];
int w, k;
cout << "Enter Number of Employee - ";
cin >> w;
for(k = 0; k < w; k++)
	wor[k].getdata();

// Printing details of manager

cout << "\nManagers Data - " << endl;
for(i = 0; i < m; i++)
	man[i].putdata();

// Printing details of Foremans

cout << "\nForemans Data - " << endl;
for(j = 0; j < f; j++)
	foreman[j].putdata();

// Printing details of workers

cout << "\nEmployee Data - " << endl;
for(k = 0; k < w; k++)
	wor[k].putdata();

    // Listing
cout<<"\nNumber of Managers:"<<m<<endl;
cout<<"\nNumber of Foremans:"<<f<<endl;
cout<<"\nNumber of Workers:"<<w<<endl;
cout<<"\n\nTotal number of Employees:"<<m+f+w<<endl;
}
