// Recursive solutions to print a sequence of numbers entered using sentinel controlled repetition in reverse order.

#include <stdio.h>

void reverse() {
    int n;
    scanf("%d", &n);

    if (n == -1)
        return;

    reverse();
    printf("%d ", n);
}

int main() {
    printf("Enter numbers (-1 to stop):\n");
    reverse();
    return 0;
}
