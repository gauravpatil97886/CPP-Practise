#include <iostream>
using namespace std;
bool check(int n){
    for(int i = 2; i < n; i++){
        if(n % i == 0)
            return false;
    }
    return true;
}

int main() {
  int n;
  cout<<"Enter number ";
  cin>>n;
  if(check(n))
    cout<<"Number is prime";
else
cout<<"Number is not prime";
}

