// Write a program that prints numbers from 10 down to 1 using a while loop.

// Example Output:

// 10 9 8 7 6 5 4 3 2 1
#include<stdio.h>

int main(){
    int i=10;
    while(i>=1){
        printf("%d ",i);
        i--;
    }
    return 0;
}