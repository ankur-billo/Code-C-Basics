// reverese the array without using any extra array

#include<stdio.h>
#define SIZE 7
int main(){
    int arr[SIZE];
    printf("Enter the elements of the array : \n");
    for (int i = 0; i < SIZE; i++)
    {
        scanf("%d",&arr[i]);
    }
    int temp=0;
    for(int i=0,j=SIZE-1;i<j;i++,j--){
        temp =arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
     for (int i = 0; i < SIZE; i++)
    {
        printf("%d  ",arr[i]);
    }
    return 0;
}