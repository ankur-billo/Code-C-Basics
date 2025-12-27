//  Given an array of marks of 10 students,if the marks of any student is less than 35 print its roll number.[roll number here refers to the index of the array.]
#include <stdio.h>
int main()
{
    int marks[10];
    printf("......Enter the marks of the students......");
    // taking the input
    for(int i=0;i<10;i++)
    {

        printf("\nthe marks of the %d student is : ",i+1);
        scanf("%d",&marks[i]);
        // condition that if the marks is less than 35 then print the index number
        if(marks[i] < 35)
        {
            printf(" The students roll number is : %d ",i);
        }
  }
  return 0;
}