#include <iostream>
using namespace std;

void update(int arr[],int n)
{
cout<<"inside the main functoion"<<endl;
arr[0]={4};
for(int i=0;i<3;i++)
{
cout<<arr[i]<<endl;
}}

int main()
{






int arr[3]={1,2,3};
arr[0]={5};
update(arr,3);

cout<<"main function :"<<endl;
for(int i=0;i<3;i++)
{
cout<<arr[i]<<endl;

}
cout<<endl;
return 0;
}
