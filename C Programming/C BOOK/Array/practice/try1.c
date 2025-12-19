//random values if array index limits are violated but the program will run with no error

#include<stdio.h>
int main(){
    int ar[4];
    ar[0]=1;
    ar[1]=4;
    ar[2]=3;
    ar[3]=9;
    printf("%d",ar[5]);
    return 0;
}