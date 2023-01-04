

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the Amount:->";
    cin>>n;

    int amount=0,rs1=100,rs2=50,rs3=20,rs4=1;
    int count1=0,count2=0,count3=0,count4=0;

   switch(1)
   {
        case 1:count1 = (n/rs1);
              amount = n-(rs1 * count1);


        case 2:count2 = (amount/rs2);
             amount = amount - (rs2 * count2);

        case 3:count3 = (amount/rs3);
             amount = amount - (rs3 * count3);

        case 4:count4 = (amount/rs4);
             amount = amount - (rs4 * count4);
             break;

   }

       cout<<"The number of 100 ruppes notes are:->"<<count1<<endl;
       cout<<"The number of 50 ruppes notes are:->"<<count2<<endl;
       cout<<"The number of 20 ruppes notes are:->"<<count3<<endl;
       cout<<"The number of 1 ruppes notes are:->"<<count4<<endl;

    return 0;
}
