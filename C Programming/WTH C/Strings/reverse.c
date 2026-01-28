#include<stdio.h>
#include<string.h>
int main(){
    char str[40];
    puts("Enter the string:");
    gets(str);
    int size=strlen(str);
    // printf("%d\n",size);
    for(int i=0,j=size-1;i<=j;i++,j--){
        char temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }
    puts("The Reversed Strings:");
    puts(str);
}