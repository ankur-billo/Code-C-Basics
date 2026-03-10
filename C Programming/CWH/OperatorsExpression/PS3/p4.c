// Write a program that demonstrates the difference between pre-increment (++x) and post-increment (x++) operations. Print the value of a variable before and after each operation.

// Example Output:

// x = 5
// Pre-increment: 6
// After pre-increment: 6
// Post-increment: 6
// After post-increment: 7

#include<stdio.h>

int main(){
    int x=5;
    printf("Initial Value: %d\n",x);
    printf("Pre-increment: %d\n",++x);
    printf("After pre-increment: %d\n",x);

    printf("Post-increment: %d\n",x++);
    printf("After post-increment: %d\n",x);
    return 0;
}