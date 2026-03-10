// Write a program that takes two numbers as input and prints the larger one using an if-else statement.

// Example Input/Output:

// Enter two numbers: 12 9  
// 12 is larger

#include<stdio.h>

int main(){
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    if(a>b){
        printf("%d is Greater!\n",a);
    }
    else{
        printf("%d is Greater!\n",b);
    }
    return 0;
}