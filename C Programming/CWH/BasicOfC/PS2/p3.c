// Write a program that swaps the values of two integer variables using a third temporary variable.

#include<stdio.h>
int main(){
    int a=3,b=5,temp;
    printf("Before Swap\n");
    printf("a = %d\nb= %d\n",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("After Swap\n");
    printf("a = %d\nb= %d\n",a,b);
    

    return 0;
}