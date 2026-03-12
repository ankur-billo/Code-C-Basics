#include<stdio.h>
#include<string.h>
struct Student{
    int serial;
    char name[10];
};
int main(){
    struct Student s1;
    s1.serial=1;
    strcpy(s1.name,"Ankur");
    printf("%d\n",s1.serial );
    printf("%s\n",s1.name );
    return 0;
}