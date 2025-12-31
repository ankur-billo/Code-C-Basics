// Converting a positive integer number (n > 0) from one base (inputBase) to another base (outputBase) 
// (2 <= input Base, outputBase <= 10). Input number should be validated before converting to make sure the 
// number uses only digits allowed in the input base?

#include <stdio.h>
#include <string.h>

int main() {
    char num[50];
    int inBase, outBase;

    printf("Enter Input Base (2-10): ");
    scanf("%d", &inBase);

    printf("Enter Output Base (2-10): ");
    scanf("%d", &outBase);

    printf("Enter the number: ");
    scanf("%s", num);


    for (int i = 0; num[i] != '\0'; i++) {
        if (num[i] < '0' || num[i] > '9' || (num[i]-'0') >= inBase) {
            printf("Invalid digit '%c' for base %d\n", num[i], inBase);
            return 0;
        }
    }

    int decimal = 0;
    for (int i = 0; num[i] != '\0'; i++) {
        decimal = decimal * inBase + (num[i] - '0');
    }

    char result[50];
    int idx = 0;

    while (decimal > 0) {
        result[idx++] = (decimal % outBase) + '0';
        decimal /= outBase;
    }
    result[idx] = '\0';

    for (int i = 0; i < idx/2; i++) {
        char temp = result[i];
        result[i] = result[idx - 1 - i];
        result[idx - 1 - i] = temp;
    }

    printf("Converted Number: %s\n", result);

    return 0;
}