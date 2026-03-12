#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr;
    int n;
    printf("Enter the number of integers: ");
    scanf("%d",&n);
    ptr=(int*)malloc(n * sizeof(int)); //takes the number of bytes
    for(int i=0;i<n;i++){
        scanf("%d",&ptr[i]); 
    }
    for(int i=0;i<n;i++){
        printf("%d ",ptr[i]);
    }
    return 0;
}