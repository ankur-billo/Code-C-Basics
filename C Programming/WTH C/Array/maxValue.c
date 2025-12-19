#include<stdio.h>
int main(){
    int arr[6],max=-1;
    for (int i = 0; i < 6; i++)
    {
        scanf("%d ",&arr[i]);
    }
    for (int i = 0; i < 6; i++)
    {
        if (max<arr[i]){
            max=arr[i];
        }
    }
    printf("The Max Value : %d \n",max);



    return 0;
}