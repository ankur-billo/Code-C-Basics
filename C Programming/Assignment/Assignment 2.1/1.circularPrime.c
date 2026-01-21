// Design a program to check if a given positive number is a circular prime or not?
// 197 -> 791

#include <stdio.h>
#include <math.h>

int isPrime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return 0;
    return 1;
}

int rotate(int n, int d) {
    int last = n % 10;
    n = n / 10;
    return last * pow(10, d - 1) + n;
}

int main() {
    int n, temp, digits = 0;
    printf("Enter number: ");
    scanf("%d", &n);

    temp = n;
    while (temp) {
        digits++;
        temp /= 10;
    }

    temp = n;
    for (int i = 0; i < digits; i++) {
        if (!isPrime(temp)) {
            printf("Not a Circular Prime");
            return 0;
        }
        temp = rotate(temp, digits);
    }
    printf("Circular Prime");
    return 0;
}
