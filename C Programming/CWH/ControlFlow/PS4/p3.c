// Write a program that takes a student’s marks (0–100) and prints the grade as per the following rules:

// 90 and above → Grade A
// 75 to 89 → Grade B
// 60 to 74 → Grade C
// Below 60 → Grade D
// Use an if-else-if ladder.

// Example Input/Output:

// Enter marks: 82  
// Grade B

#include<stdio.h>

int main(){
    int grade;
    printf("Enter marks: ");
    scanf("%d",&grade);
    if(grade>=90){
        printf("Grade A\n");
    }
    else if(grade>=75){
        printf("Grade B\n");
    }
    else if(grade>=60){
        printf("Grade C\n");
    }
    else{
        printf("Grade D\n");
    }
    return 0;
}