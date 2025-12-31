//Compute prime factors of a positive integer number?
#include <stdio.h>

int main() {
    int n, i;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    printf("Prime factors of %d are : ", n);

   
    for (i = 2; i <= n; i++) {
        while (n % i == 0) {   
            printf("%d, ", i);
            n = n / i;       
        }
    }

    printf("\n");

    return 0;
}