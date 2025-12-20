//total number of pairs in the array whose sum is equal to the given value x
#include<stdio.h>
int main(){
    int arr[8];
    for(int i=0;i<8;i++){
        printf("Enter the element %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    int x,count=0;
    printf("Enter the number : ");
    scanf("%d",&x);
    for(int i=0;i<8;i++){
    for(int j=i+1;j<8;j++){
        if(arr[i]+arr[j]==x){
            count++;
        }
    }
    }
    printf("Count = %d",count);
return 0;
}