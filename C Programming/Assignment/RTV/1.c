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
calAvg()
{

}
highScore()
{
}
lowScore()
{
}
gradeDistri()
{
}
int main()
{
    int n;
    int marks[100];
    printf("Enter the number of students: ");
    scanf("%d",&n);
    printf("Enter the marks: ");
    for(int i=0;i<n;i++){
        scanf("%d",&marks[i]);
    }
    printf("The marks: ");
    for(int i=0;i<n;i++){
        printf("%d",marks[i]);
    }
    
    // calAvg();
    // highScore();
    // lowScore();
    // gradeDistri();
    return 0;
}