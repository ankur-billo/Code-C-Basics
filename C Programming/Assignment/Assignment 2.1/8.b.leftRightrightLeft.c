// Recursive solutions to display digits of a number left to right (and right to left).

#include <stdio.h>

void leftToRight(int n) {
    if (n == 0)
        return;
    leftToRight(n / 10);
    printf("%d ", n % 10);
}

void rightToLeft(int n) {
    if (n == 0)
        return;
    printf("%d ", n % 10);
    rightToLeft(n / 10);
}

int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    printf("Digits from left to right:\n");
    leftToRight(n);

    printf("\nDigits from right to left:\n");
    rightToLeft(n);

    return 0;
}
