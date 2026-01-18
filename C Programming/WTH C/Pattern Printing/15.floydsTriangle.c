// EVEN
// 1 
// 2 3 
// 4 5 6 
// 7 8 9 10 
// 11 12 13 14 15 

// #include<stdio.h>
// int main(){
//     int n; 
//     printf("Enter the number: ");
//     scanf("%d",&n);
//     int a=1;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//                 printf("%d ",a);
//                 a++;
//         }
//         printf("\n");
//     }
//     return 0;
// }

// ODD
// 1 
// 3 5 
// 7 9 11 
// 13 15 17 19 
// 21 23 25 27 29 

#include<stdio.h>
int main(){
    int n; 
    printf("Enter the number: ");
    scanf("%d",&n);
    int a=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
                printf("%d ",a);
                a+=2;
        }
        printf("\n");
    }
    return 0;
}