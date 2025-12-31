// Check if two positive integer numbers are amicable numbers or not?

#include<stdio.h>
int main(){
        int n1, n2;
    int i, sum1 = 0, sum2 = 0;

    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);

    for (i = 1; i <= n1 / 2; i++) {
        if (n1 % i == 0)
            sum1 += i;
    }

    for (i = 1; i <= n2 / 2; i++) {
        if (n2 % i == 0)
            sum2 += i;
    }

    if (sum1 == n2 && sum2 == n1)
        printf("%d and %d are Amicable Numbers.\n", n1, n2);
    else
        printf("%d and %d are NOT Amicable Numbers.\n", n1, n2);
    return 0;
}