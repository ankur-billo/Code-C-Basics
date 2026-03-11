// Write a program that takes a number as input and prints its factorial. Use a for loop.

// Example Input/Output:

// Enter a number: 5  
// Factorial = 120
#include<stdio.h>

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int factorial=1;
    for(int i=n;i>=1;i--){
        factorial *= i;
    }
    printf("Factorial = %d\n",factorial);
    return 0;
}