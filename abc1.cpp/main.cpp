//A
//BC
//DEF
//GHIJ


#include<iostream>
using namespace std;
int main()
{
int n;
cin>>n;
int i=1;
//while(i<=n)
//{
//int j=1;
//while(j<=i)
//{//cout<<'A';
//    char ch='C'+i+j-1;
//    cout<<ch;
//    j=j+1;
//}
//cout<<endl;
//i=i+1;
//}

//while(i<=n)
//{
//int j=1;
//while(j<=i)
//{
//    char ch='D'-i+j;
//    cout<<ch;
//    j=j+1;
//}
//cout<<endl;
//i=i+1;
//}
//}
//4
//D
//CD
//BCD
//ABCD

// 2nd approach
while(i<=n)
{
    int j=1;
    char start='A'+n-i;
    while(j<=i)
    {
        cout<<start;
        start++;
        j++;
    }
    cout<<endl;
    i++;
}
}
