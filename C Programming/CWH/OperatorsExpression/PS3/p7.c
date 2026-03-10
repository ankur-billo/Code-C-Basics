// Predict the output of this expression before running it:
// int result = 10 + 20 * 3 / 2 - 5;
// Then, write a program to verify your answer and explain why that result was produced.
#include<stdio.h>

int main(){
    int result =10+20*3/2-5;
    
    // operator precedence:
    // */%
    // +-
    // =
    // in this result the operator associativity is from LEFT to RIGHT
    // so first multiplication of 20*3 ; then division of 60/2 ; then addition of 10+ 30 ; then subtraction of 40-5;
    
    printf("Value: %d\n",result);
    return 0;
}