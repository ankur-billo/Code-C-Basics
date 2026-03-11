// Write a program using a while loop that calculates the sum of the first N natural numbers entered by the user.
#include<stdio.h>

int main(){
    int n;
    printf("Enter the natural number: ");
    scanf("%d",&n);
    int i=1,sum=0;
    while(i<=n){
        sum+=i;
        i++;
    }
    printf("Sum: %d\n",sum);
    return 0;
}