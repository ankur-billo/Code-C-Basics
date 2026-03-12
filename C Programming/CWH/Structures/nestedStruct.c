#include<stdio.h>
#include<string.h>
struct Adress{
    int pincode;
};
struct Student{
    char name[30];
    struct Adress ad;
};
int main(){
    // printf("Nested Structures");
    struct Student s1;
    strcpy(s1.name,"Ankur");
    s1.ad.pincode=700008;
    printf("%d\n",s1.ad.pincode);
    printf("%s\n",s1.name);
    return 0;
}