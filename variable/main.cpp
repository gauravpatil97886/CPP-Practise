//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//    int a=3;
//    //cout << a << endl;
//    if(false)
//    {
//        int a=5;
//        cout<<a;
//    }
//    return 0;
//}
//



//#include <limits>
//int main()
//{
//    __int128_t min = std::numeric_limits<__int128_t>::min();
//    __uint128_t max = std::numeric_limits<__uint128_t>::min();
//}


// sized_int_types.cpp

#include <stdio.h>

void func(int i) {
    printf_s("%s\n", __FUNCTION__);
}

int main()
{
    __int8 i8 = 100;
    func(i8);   // no void func(__int8 i8) function
                // __int8 will be promoted to int
}
