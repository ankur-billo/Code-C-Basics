// Exercise 5: Compound Assignment
// Write a program that initializes an integer variable with some value and then applies the following compound assignment operations sequentially:

// +=, -=, *=, /=, %=
// Print the value of the variable after each operation.

#include<stdio.h>

int main(){
    int x =10;
    printf("Initial Value: %d\n",x);
    x+=4;
    printf("The Value of x : %d\n",x);
    x-=2;
    printf("The Value of x : %d\n",x);
    x*=7;
    printf("The Value of x : %d\n",x);
    x/=3;
    printf("The Value of x : %d\n",x);
    x%=9;
    printf("The Value of x : %d\n",x);
    return 0;
}