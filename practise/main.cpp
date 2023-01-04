#include <iostream>

using namespace std;

int main()
{
int n;
cin>>n;
int m=n;
int mass=0;

while(m!=0)
{
mass=(mass<<1)|1;
m=m>>1;
//cout<<mass<<" mass->"<< m<<endl;
}
int ans=(~n)&mass;
cout<<ans<<endl;






    return 0;
}
