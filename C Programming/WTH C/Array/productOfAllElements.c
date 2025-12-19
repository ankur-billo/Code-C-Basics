#include<stdio.h>
int main(){
    int arr[5];
    printf("Enter the elements : ");
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    int product=1;
    for(int i=0;i<5;i++){
        product=product*arr[i];
    }
    printf("Product of All elements : %d",product);
    return 0;
}