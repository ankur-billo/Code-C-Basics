// Implement your own string length and string reversal.

#include <stdio.h>

int length(char s[]) {
    int i = 0;
    while (s[i] != '\0') i++;
    return i;
}

void reverse(char s[]) {
    int l = length(s);
    for (int i = l - 1; i >= 0; i--)
        printf("%c", s[i]);
}

int main() {
    char s[50];
    printf("Enter string: ");
    scanf("%s", s);

    printf("Length = %d\nReverse = ", length(s));
    reverse(s);
    return 0;
}
