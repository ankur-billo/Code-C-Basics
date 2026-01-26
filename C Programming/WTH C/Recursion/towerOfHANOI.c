#include<stdio.h>
void tower(int a,char s, char h, char d){
    if(a==0) return;
    tower(a-1,s,d,h);
    printf("%c -> %c\n",s,d);
    tower(a-1,s,d,h);
    return;
}
int main(){
    int n;
    printf("Enter the number of disks: ");
    scanf("%d",&n);
    tower(n,'A','B','C');
    return 0;
}