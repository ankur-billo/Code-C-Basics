// Recreate the grading system (Exercise 3) using a switch statement by dividing the marks by 10 and matching the integer value.

// Write a program that takes a student’s marks (0–100) and prints the grade as per the following rules:

// 90 and above → Grade A
// 75 to 89 → Grade B
// 60 to 74 → Grade C
// Below 60 → Grade D

// Example Input/Output:

// Enter marks: 82  
// Grade B 

#include<stdio.h>

int main(){
    int n;
    printf("Enter grade: ");
    scanf("%d",&n);
    switch(n/10){
        case 10:
        case 9:
            printf("Grade A\n");
            break;
        case 8:
        case 7:
            printf("Grade B\n");
            break;
        case 6:
            printf("Grade C\n");
            break;
        default :
            printf("Grade D\n");
    }
    return 0;
}