#include <stdio.h>
struct student
{
    char student_name[50];
    int roll ;
    float height ;
}
ppos[5]
int main()
{
    int i ;
    printf("Enter Information Of Student:\n");

    //storing information
    for(i=0; i<5; ++i)
    {
       s[i].roll= i+1 ;
       printf("Enter Student Name: ");
       scanf("%s", s[i}.student name);
       printf("Enter Roll Number %d, \n" ,s[i],roll);
       printf("Enter weight: ");
       scanf("%f", &s[i].weight );
    }
    printf("Display Information:\n")

    //displaying information
    for(i=0 ; i<5 ; ++i)
    {
        printf("Studen_Name");
        printf("\nRoll number: %d\n, i+1");
        printf("Weight: %.if, s[i]. weight");
        printf("\n");

    }
    return 0;
}
