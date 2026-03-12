#include<stdio.h>
#include<string.h>

struct Student{
    int roll;
    char name[90];

};
int main(){
    // printf("");
    struct Student s1,s2,s3;
    struct Student *s1ptr, *s2ptr, *s3ptr;
    s1ptr = &s1;
    s2ptr = &s2;
    s3ptr = &s3;

    strcpy((*s1ptr).name,"ankur");
    printf("Name is %s",s1ptr->name);
    return 0;
}