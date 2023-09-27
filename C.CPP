#include<iostream.h>
#include<conio.h>
#include<process.h>
#define size 10
class stack
{
int s[size],top;
public:
stack()
{
top=-1;
}
void push(int);
void pop();
void display();
};
void stack::push(int item)
{
if(top==size-1)
{
cout<<"stack overflow"<<endl;
exit(1);
}
else
{
s[++top]=item;
}
}
void stack::pop()
{
if(top==-1)
{
cout<<"stack underflow"<<endl;
}
else
{
cout<<"poped element is"<< s[top--]<<endl;
}
}
void stack::display()
{
if(top==-1)
{
cout<<"stack is empty\n";
}
else
  {
 cout<<"elements are"<<endl;
 for(int i=0;i<=top;i++)
 cout<<s[i]<<" "<<endl;
}}
void main()
{
clrscr();
int item,ch,n;
stack st;
getch();
do{
cout<<"Enter our choice:1=push,2=pop,3=display,4=exit"<<endl;
cin>>ch;
switch(ch)
{
case 1:
cout<<"Enter the item"<<endl;
cin>>item;
st.push(item);
break;
case 2:
st.pop();
break;
case 3:
st.display();
break;
case 4:
exit(0);
break;
default:
cout<<"invalid input";
}
}while(1);
}
