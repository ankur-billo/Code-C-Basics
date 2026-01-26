#include<stdio.h>
void sumN(int n,int s){
    if(n==0){
        printf("%d",s);
        return;
    }
    sumN(n-1,s+n);
    return;
}
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    sumN(n,0);
    return 0;
}