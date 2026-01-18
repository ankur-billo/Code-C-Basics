// 1
// 01
// 101
// 0101

// #include<stdio.h>
// int main(){
//     int n; 
//     printf("Enter the number: ");
//     scanf("%d",&n);
//     int a;
//     for(int i=1;i<=n;i++){
//         //start -> odd pe 1 | even pe 0
//         if(i%2!=0){
//             a=1;
//         }
//             else {
//                 a=0;
//             }
//             for(int j=1;j<=i;j++){
//                 printf("%d",a);
//                 //switch
//                 if(a==0){
//                     a=1;
//                 }
//                     else {
//                         a=0;
//                     }
//         }
//         printf("\n");
//     }
//     return 0;
// }

//2nd way without variable
#include<stdio.h>
int main(){
    int n; 
    printf("Enter the number: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
               if((i+j)%2 ==0) {
                printf("%d",1);
               }
               else{
                printf("%d",0);
               }
        }
        printf("\n");
    }
    return 0;
}