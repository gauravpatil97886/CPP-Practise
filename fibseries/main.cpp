//#include<iostream>
//#ifdef _MSC_VER
//
//// using Visual C++ specific __intX types
//typedef signed __int8 int8;
//typedef unsigned __int8 uint8;
//typedef signed __int16 int16;
//...
//
//#else
//
//#include <stdint.h>
//typedef int_fast64_t int8;
//typedef int_fast64_t uint8;
//typedef int_fast64_t int16;
//int
//
//
//#endif
//
//
//using namespace std;
//int main()
//{
//int16 n;
//cin>>n;
//
//int16 a = 0;
//int16 b = 1;
//cout<<a << " "<< b << " ";
//for(int16 i=1;i<=n;i++)
//{
//    int16 next_number =a+b;
//    cout << next_number<<;
//    a = b;
//    b = next_number;
//
//}
//}



#include<iostream>
using namespace std;
int main()
{
int n=10;
int a=0;
int b=1;
for(int i=1;i<=n;i++)

{
    int next_n=a+b;
    cout<<next_n<<endl;
    a=b;
    b=next_n;
}
}










