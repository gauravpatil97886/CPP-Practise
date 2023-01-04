#include <iostream>
using namespace std;

void rev(int arr[],int n)
{
int start=0;
int end1=n-1;
while(start<=end1)
{
  swap(arr[start],arr[end1]);
    start++;
    end1--;
}
}

void printarray(int arr[],int n)
{

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int main()
{
int arr[5];
for(int i=0;i<5;i++)
{
    cin>>arr[i];
}
rev(arr,5);
printarray(arr,5);
return 0;
}
