// total = ∑ x∧2 i  i=1 to i=10
#include <stdio.h>
int main(){
    float ar[10];
    printf("Enter the array elemetns: ");
    for(int i=0;i<10;i++){
        scanf("%f",&ar[i]);
    }
    float total=0.0;
    for(int i=0;i<10;i++){
        total=total+ar[i]*ar[i];
    }
    for(int i=0;i<10;i++){
        printf("ar[%d] = %.2f\n",i,ar[i]);
    }
    printf("The total value = %.2f\n",total);
    return 0;
}