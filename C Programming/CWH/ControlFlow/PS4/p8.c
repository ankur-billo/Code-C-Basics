// Write a program using goto to print numbers from 1 to 5. Then rewrite it using a loop (for or while) to show why loops are better.

// BAWALL PROGRAMM FUCKK OFFF

#include<stdio.h>

int main(){
    int a=1;

loop:       
    printf("%d\n",a);
    a++;

    if(a<=5){
        goto loop;
    }

    return 0;
}