// Write a program that prints the sum of all even numbers between 1 and 20. Use continue to skip odd numbers.

// Example Output:

// Sum of even numbers between 1 and 20 = 110
#include<stdio.h>

int main(){
    int sum=0;
    for(int i=1;i<=20;i++){
        if(i%2==0){
            sum+=i;
        }else{

            continue;
        }
    }
    printf("Sum Of All Even Numbers: %d\n",sum);
    return 0;
}