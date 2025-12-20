//find the difference of sum of elements of all even and odd indices

#include<stdio.h>
int main(){
    int arr[6];
    for(int i=0;i<6;i++){
        printf("Enter the element %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    int sumOdd=0,sumEven=0;
    for(int i=0;i<6;i++){
        if(i%2==0){
            sumEven+=arr[i];
        }else{
            sumOdd+=arr[i];
        }
    }
    printf("The Difference is : %d ",sumEven-sumOdd);
return 0;
}