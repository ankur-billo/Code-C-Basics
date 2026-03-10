// Write a program that takes an integer from the user and prints whether it is even or odd.

// Example Input/Output:

// Enter a number: 7  
// 7 is odd

#include<stdio.h>

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n%2==0){
        printf("%d is Even!\n",n);
    }
    else{
        printf("%d is Odd\n",n);
    }
    return 0;
}