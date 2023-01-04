#include<iostream>
using namespace std;
int main()
{
int num;
cin>>num;
char ch='2';
switch(ch)
{

    case 1:cout<<"first"<<endl;
    break;
    case 2:cout<<"second case"<<endl;
    break;
    case '2':cout<<"second character"<<endl;
    break;

    default :cout<<"default"<<endl;

}
cout<<endl;
}
