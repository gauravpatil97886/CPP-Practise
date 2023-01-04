#include <iostream>

using namespace std;
//int sum_array(int arr)
int main()
{
    int arr[3];
    int sum=0;
    int mul=1;
    for(int i=0;i<3;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
        mul=mul*arr[i];

    }
    cout<<sum<<endl;
    cout<<mul;

    return 0;
}
