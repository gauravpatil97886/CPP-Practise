//#include <iostream>
//
//using namespace std;
//int reverse(int x) {
//       int ans=0;
//      while(x!=0)
//      {
//          int digit=x%10;
//          if((ans>INT_MAX/10)||(ans<INT_MIN/10))
//          {
//              return 0;
//          }
//
//          ans=(ans*10)+digit;
//          x=x/10;
//      }
//        return ans;
//
//
//
//    }
//
//int main()
//{
//int n;
//int a;
//cin>>n;
//cout<<reverse(n);
//}
//
//#include<iostream>
//using namespace std;
//int main()
//{
//    int n;
//    cin>>n;
//    int ans=0;
//    while(n!=0)
//    {
//        int digit=n%10;
//        cout<<digit<<endl;
//        ans=(ans*10)+digit;
//        n=n/10;
//
//    }
//    cout<< ans<<endl;
//}





#include<iostream>
using namespace std;
int main()
{
int n;
cin>>n;
int ans=0;

while(n!=0)
{
    int digit=n%10;
    ans=(ans*10)+digit;
    n=n/10;

}
cout<<ans;

}
