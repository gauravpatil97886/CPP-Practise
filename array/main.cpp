#include <iostream>
using namespace std;
////int main()
////{
////
////int num[200]={2,7,6,5};
////int n=10;
////for(int i=0;i<n;i++)
////{
////    cout<<num[i]<<endl;
////cout<<"----------------------"<<endl;
////
////}
////
//////cout<<endl<<"value of 210 index is :"<<num[210]<<endl;
////
////
////}
//
void printarrary(int arr[],int size)
{
cout<<"printing the array : "<<endl;
for(int i=0;i<=size;i++)
{
cout<<arr[i]<<" "<<endl;
}
cout<<"printing done..."<<endl;
}
//
int sizeofarray(int a[])
{
    int sizeofarr1=sizeof(a)/sizeof(int);
    return sizeofarr1;
}
//
int main()
{
int a[10]={0,1,2,3,4};
printarrary(a,10);


cout<<"using create size function..."<<endl;
cout<<sizeofarray(a)<<endl;





cout<<"using create size method..."<<endl;

int aa=sizeof(a)/sizeof(int);
cout<<aa<<endl;


cout<<"character stores in array"<<endl;


char let[10]={'a','b','c','d','e'};
//cout<<let[2];

for(int i=0;i<=10;i++)
{
cout<<let[i]<<" "<<endl;
}


}


