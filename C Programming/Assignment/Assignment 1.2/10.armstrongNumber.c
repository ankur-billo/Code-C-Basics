// Check if a given positive integer number Armstrong number or not?
#include <stdio.h>
#include <math.h>

int main() {
    int n, temp, digit, count = 0;
    int sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    temp = n;

    while (temp > 0) {
        count++;
        temp = temp / 10;
    }
    temp = n;
    
    while (temp > 0) {
        digit = temp % 10;
        sum += pow(digit, count);
        temp = temp / 10;
    }
    if (sum == n)
        printf("%d is an Armstrong Number.\n", n);
    else
        printf("%d is NOT an Armstrong Number.\n", n);

    return 0;
}