// Student Marks Analyzer (1D Array + Functions + Loops)
// What it includes:
// • Input marks of students using loops
// • Store in 1D array
// • Functions for:
//  o calculating average
//  o highest score
//  o lowest score
//  o grade distribution
// • Pointer-based traversal (optional)
// Real use: Small college marks calculator.

#include <stdio.h>
// calAvg()
// {

// }
// highScore()
// {
// }
// lowScore()
// {
// }
// gradeDistri()
// {
// }
int main()
{
    int n;
    int marks[100];
    // taking total number of students
    printf("Enter the number of students: ");
    scanf("%d",&n);
    // taking marks input
    for(int i=0;i<n;i++){
        printf("Enter the marks of Student %d : ",i+1);
        scanf("%d",&marks[i]);
    }
    // printing the marks of students
    printf("----- Marks of %d Students -----\n",n);
    for(int i=0;i<n;i++){
        printf("%d\n",marks[i]);
    }
    
    // calAvg();
    // highScore();
    // lowScore();
    // gradeDistri();
    return 0;
}