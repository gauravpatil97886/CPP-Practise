#include <iostream>

using namespace std;

int main()
{
int a;
cout<<"enter a first value"<<endl;
cin>>a;

cout<<"---------------------------------"<<endl;

int b;
cout<<"enter a second  value"<<endl;
cin>>b;
cout<<"---------------------------------"<<endl;
char op;
cout<<"enter a operation"<<endl;
cin>>op;
cout<<"---------------------------------"<<endl;

switch(op)
{
case '+':cout<<"addtions is : "<<a+b<<endl;
break;

case '-':cout<<"sub is :"<<a-b<<endl;
break;

case '/':cout<<"division is :"<<a/b<<endl;
break;

case '%':cout<<"modulo is "<<a%b<<endl;
break;

default:cout<<"this operation is not in this calculator sorry :)"<<endl;

}


}
