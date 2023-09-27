// program 5
#include<iostream>
using namespace std;
class Item
{
    private:
    string item_id;
    float item_price;
    public:
    void getdata()
    {
        cout<<"Enter the product ID"<<endl;
        cin>>item_id;
        cout<<"Enter the price"<<endl;
        cin>>item_price;
    }
    void printdata()
    {
        cout<<"product ID:"<<item_id<<endl;
        cout<<"Price:"<<item_price<<endl; 

    }
};
Item item1,item2;

int main()
{
    /* code */
    item1.getdata();
    item2.getdata();
    item1.printdata();
    item2.printdata();

    return 0;
}

