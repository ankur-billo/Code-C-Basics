#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *ptr;
    char str[100];
    ptr=fopen("hello.txt","r");
    if(ptr==NULL){
        printf("There was an issue opening the file!");
        return 1;
    }
    fgets(str,100,ptr);
    printf("The File content is %s\n",str);
    //repeat for multiple lines
    
    fgets(str,100,ptr);
    printf("The File content is %s\n",str);
    fclose(ptr);
    return 0;
}