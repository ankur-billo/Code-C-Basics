// rotate 90 degree clockwise (leetcode - 48)
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
    // rotate
    for (int i = 0; i < n; i++){
        for(int j=0,k=n-1;j<k;j++){
            int temp=arr[i][j];
            arr[i][j]=arr[i][k];
            arr[i][k]=temp;
        }
    }
    printf("\nThe Rotated Array : \n");
    for (int i = 0; i < n; i++){
        for(int j=0;j<n;j++){
            printf("%d  ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}