// Design a program which reads an array of n integer elements and outputs mean(average), range(max-min) and mode(most frequent elements).

#include <stdio.h>

int main() {
    int n, a[50], sum = 0;
    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        sum += a[i];
    }

    float mean = (float)sum / n;

    int max = a[0], min = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] > max) max = a[i];
        if (a[i] < min) min = a[i];
    }

    int mode = a[0], maxCount = 0;
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++)
            if (a[i] == a[j]) count++;
        if (count > maxCount) {
            maxCount = count;
            mode = a[i];
        }
    }

    printf("Mean = %.2f\nRange = %d\nMode = %d",
           mean, max - min, mode);
    return 0;
}
