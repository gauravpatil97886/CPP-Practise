#include <iostream>
using namespace std;

bool serch(int arr[],int size,int key)
{
for(int i=0;i<size;i++)
{
    if(arr[i]==key)
    {
        return 1;
    }
}
return 0;
}


int main()
{
int arr[10]={1,2,3,14,15,26,27,38,49,0};
cout<<"enter element or key to find : "<<endl;
int key;
cin>>key;
bool found=serch(arr,10,key);
if(found)
{
    cout<<"key is present"<<endl;
}
else{
        cout<<"key is absent :)"<<endl;

}
}
