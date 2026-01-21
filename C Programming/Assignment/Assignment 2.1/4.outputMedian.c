// Design a program which reads an array of n integer elements and outputs median.

#include <stdio.h>

int main() {
    int n, a[50];
    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (a[i] > a[j]) {
                int t = a[i];
                a[i] = a[j];
                a[j] = t;
            }

    if (n % 2 == 1)
        printf("Median = %d", a[n / 2]);
    else
        printf("Median = %.2f", (a[n / 2 - 1] + a[n / 2]) / 2.0);

    return 0;
}
