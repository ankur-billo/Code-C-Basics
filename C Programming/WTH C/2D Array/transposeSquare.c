// transpose the array of nXn matrix without using extra array

#include<stdio.h>
int main(){
    int n;
    printf("Enter the no. of row and column : ");
    scanf("%d",&n);
    int arr[n][n];
    printf("Enter the array elements : ");
    for (int i = 0; i < n; i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\nThe Array : \n");
    for (int i = 0; i < n; i++){
        for(int j=0;j<n;j++){
            printf("%d  ",arr[i][j]);
        }
        printf("\n");
    }
    //memory swapping wala
    for (int i = 0; i < n; i++){
        for(int j=0;j<i;j++){
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }
    printf("\nThe Transposed Array : \n");
    for (int i = 0; i < n; i++){
        for(int j=0;j<n;j++){
            printf("%d  ",arr[i][j]);
        }
        printf("\n");
    }
    //It just switches the matrix at printing not in memory so it is not logically correct
    // printf("\nThe Transposed Array : \n");
    // for (int i = 0; i < n; i++){
    //     for(int j=0;j<n;j++){
    //         printf("%d  ",arr[j][i]);
    //     }
    //     printf("\n");
    // }
    return 0;
}