#include <stdio.h>
using namespace std;

bool check_prime(int n)
{
    for(i=2;i<n;i++)
    {
        if(n%i==0)
            return false;

    }
    return true;
}

int main(){
int n;
cin>>n;
if(check_prime(n))
    cout<<"prime";
else
cout<<"not prime";
}
