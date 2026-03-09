// Write a program that takes two integers as input from the user and prints their sum.
#include<stdio.h>
int main(){
    int a,b,sum;
    printf("Enter the 1st number: ");
    scanf("%d",&a);
    printf("Enter the 2nd number: ");
    scanf("%d",&b);
    sum=a+b;
    printf("The sum: %d\n",sum);
    return 0;
}