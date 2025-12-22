// store the transposed array in new array
// transpose of the matrix entered by the user (LEETCODE - 867)
#include<stdio.h>
int main(){
    int r,c;
    printf("Enter the no. of rows : ");
    scanf("%d",&r);
    printf("Enter the no. of columns : ");
    scanf("%d",&c);
    int arr[r][c],b[c][r];
    printf("Enter the array elements : \n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\nThe Array : \n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d  ",arr[i][j]);
        }
        printf("\n");
    }
    printf("\nThe Transpose Array : \n");
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            printf("%d  ",arr[j][i]);
        }
        printf("\n");
    }

    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            b[i][j]=arr[j][i];
        }

    }

    printf("\nThe Transpose New Array : \n");
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            printf("%d  ",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}