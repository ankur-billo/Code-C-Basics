// Write a program that checks whether a given year is a leap year or not. A leap year is divisible by 4, but not by 100 unless it is also divisible by 400.

// Example Input/Output:

// Enter a year: 2024  
// 2024 is a leap year

#include<stdio.h>

int main(){
    int year;
    printf("Enter a year: ");
    scanf("%d",&year);
    if(year%400==0||year%4==0 && year%100!=0){
        printf("%d is a Leap Year!\n",year);
    }
    else{
        printf("%d is Not a Leap Year!\n",year);
    }
    return 0;
}