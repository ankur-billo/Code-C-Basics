// multiplication of two matrices given by the user

#include<stdio.h>
int main(){
    int r1,c1;
    printf("Enter the no. of rows: ");
    scanf("%d",&r1);
    printf("Enter the no. of columns: ");
    scanf("%d",&c1);
    int a[r1][c1];
    printf("Enter the array elements of the First Array: \n");
    for(int i=0;i<r1;i++){
        for(int j=0;i<c1;i++){
            scanf("%d",a[i][j]);
        }
    }
    int r2,c2;
    printf("Enter the no. of rows: ");
    scanf("%d",&r2);
    printf("Enter the no. of columns: ");
    scanf("%d",&c2);
    int b[r2][c2],mul[r1][c2];
    printf("Enter the array elements of the Second Array: \n");
    for(int i=0;i<r2;i++){
        for(int j=0;i<c2;i++){
            scanf("%d",b[i][j]);
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){

        }
    }
    printf("\nThe Multiplication Result : ");
    for(int i=0;i<r1;i++){
        for(int j=0;i<c2;i++){
            printf("%d  ",mul[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}