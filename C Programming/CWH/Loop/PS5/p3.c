// Write a program that takes an integer as input and prints its multiplication table up to 10.

// Example Input/Output:

// Enter a number: 7  
// 7 x 1 = 7  
// 7 x 2 = 14  
// ...
// 7 x 10 = 70
#include<stdio.h>

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(int i=1;i<=10;i++){
        printf("%d X %d = %d\n",n,i,n*i);
    }
    return 0;
}