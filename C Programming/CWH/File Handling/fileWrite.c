#include<stdio.h>

int main(){
    FILE *ptr;
    ptr=fopen("newWrite.txt","w");
    fprintf(ptr,"Hello World");// can create a string and replace Hello World with that string variable
    fclose(ptr);
    return 0;
}