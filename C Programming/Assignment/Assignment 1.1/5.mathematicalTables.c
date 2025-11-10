// Display first mathematical tables, each table up to 10 rows? 
// Generalise this to display first n (> 0) mathematical tables up to m (m > 0) rows.
#include<stdio.h>

int main(){
    int n,i,j;

    printf("Enter the n no. of tables to display: ");
    scanf("%d",&n);

     if(n<=0){
        printf("Invalid! Enter a Positive Integer!");
        return 0;
    }

    for(i=1;i<=n;i++){
        printf("\n--- Multiplication Table of %d ---\n\n", i);
        for(j=1;j<=10;j++){
            printf("%d X %d = %d\n",i,j,i*j);
        }
    }

   
    return 0;
}