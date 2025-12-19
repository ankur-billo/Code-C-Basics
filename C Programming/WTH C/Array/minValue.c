//learnt a new header file
#include<stdio.h>
#include<limits.h>
int main(){
int arr[6],min=INT_MAX;
    for (int i = 0; i < 6; i++)
    {
        scanf("%d ",&arr[i]);
    }
    for (int i = 0; i < 6; i++)
    {
        if (min>arr[i]){
            min=arr[i];
        }
    }
    printf("The Min Value : %d \n",min);


    return 0;
}