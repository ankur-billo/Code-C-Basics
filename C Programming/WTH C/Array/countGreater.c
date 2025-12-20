#include<stdio.h>
int main(){
    int arr[5];
    for(int i=0;i<5;i++){
        printf("Enter the element %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    int x;
    printf("Enter the number : ");
    scanf("%d",&x);
    int count =0;
    for(int i=0;i<5;i++){
        if(arr[i]>x){
            count++;
        }
    }
    printf("The total count of the elements greater than %d is : %d ",x,count);
return 0;
}