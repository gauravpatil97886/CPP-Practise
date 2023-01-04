//#include <iostream>
//
//using namespace std;
//get_max(int num[],int n)
//{
//int max=INT_MAX;
//for(int i=0;i<n;i++)
//{
//if(num[i]>max)
//{
//    max=num[i];
//}
//}
//return max;
//}
//
//
//get_min(int num[],int n)
//{
//int min=INT_MIN;
//for(int i=0;i<n;i++)
//{
//if(num[i]<min)
//{
//    min=num[i];
//}
//}
//return min;
//}
//int main()
//{
//  int array_size;
//  cout<<"array size enter :"<<endl;
//  cin>>array_size;
//  int num[1000];
//      cout<<"enter array :";
//
//  for(int i=1;i<=array_size;i++)
//  {
//      cin>>num[i];
//
//  }
//
//cout<<"max element your array is :"<<get_max(num,array_size)<<endl;
//cout<<"----------------------"<<endl;
//cout<<"min  element your array is :"<<get_min(num,array_size)<<endl;
//
//    return 0;
//}











#include<iostream>
using namespace std;

int getMin(int num[], int n) {

    int mini = INT_MAX;

    for(int i = 0; i<n; i++) {

        mini = min( mini, num[i]);

        //if(num[i] < min){
        //    min = num[i];
        //}
    }

    //returning min value
    return mini;
}

int getMax(int num[], int n) {

    int maxi = INT_MIN;

    for(int i = 0; i<n; i++) {

        maxi = max(maxi, num[i]);

       // if(num[i] > max){
         //   max = num[i];
       // }
    }

    //returning max value
    return maxi;
}

int main() {

    int size;
    cin >> size;

    int num[100];

    //taking input in array
    for(int i = 0; i<size; i++) {
        cin >> num[i];
    }

    cout << " Maxi
    mum value is " << getMax(num, size) << endl;
    cout << " Minimum value is " << getMin(num, size) << endl;


    return 0;
}
