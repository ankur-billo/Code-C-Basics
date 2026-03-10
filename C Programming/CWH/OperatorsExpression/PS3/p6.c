// Write a program that demonstrates type casting by dividing two integers and printing both the integer and floating-point results.

// Example Output:

// Integer division result: 2
// Floating-point division result: 2.50

#include<stdio.h>

int main(){
    int a=5,b=2;
    int div = a/b;
    float divi = (float)a/b;
    printf("Integer division result: %d\n",div);
    printf("Floating-point division result: %.2f\n",divi);
    return 0;
}