#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"enter a number:";
cin>>n;
int row=1;
int count=1;

while(row<=n)
{
    int col=1;
    int count=1;

   // int val=row;
    while(col<=row)
    {
  //   cout<<val;
   //  val=val+1;
   cout<<count;
   count=count+1;
   cout<<count;

     col=col+1;
     }
    cout<<endl;
    row=row+1;
}
}

/*
1
23
345
4567
*/
