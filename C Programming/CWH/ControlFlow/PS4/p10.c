// Write a program that takes a number and prints whether it lies between 1–10, 11–20, or greater than 20 using an if-else-if ladder.

#include<stdio.h>

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n<=10){
        printf("%d lies between 1-10\n",n);
    }
    else if(n<=20){
        printf("%d lies between 11-20\n",n);
    }
    else{
        printf("%d is Greater than 20!\n",n);
    }
    return 0;
}