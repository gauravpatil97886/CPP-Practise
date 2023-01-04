#include<stdio.h>
#include<conio.h>


void main()

{
   int a,b,c;
   printf("enter a two numbers:");
   scanf("%d %d",&a,&b);
   c=a;
   a=b;
   b=c;
   printf(" a is:- %d",a);
   printf(" and b is:_ %d ",b);
   getch();


}
