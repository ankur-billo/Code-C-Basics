// Write a program that keeps asking the user to enter a positive number until they enter 0. Use a do-while loop.

// Example Input/Output:

// Enter a number: 4  
// Enter a number: 9  
// Enter a number: 0  
// Program ended
#include<stdio.h>

int main(){
    int n;
    do{
        printf("Enter a number: ");
        scanf("%d",&n);
    }while(n!=0);
    return 0;
}