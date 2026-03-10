// Write a simple calculator program that uses a switch statement to perform operations based on user choice. Operations:

// Addition
// Subtraction
// Multiplication
// Division
// Example Input/Output:

// Enter first number: 8  
// Enter second number: 2  
// Enter operation (1-Add, 2-Sub, 3-Mul, 4-Div): 3  
// Result = 16

#include<stdio.h>

int main(){
    int a,b;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    int operation;
    printf("Enter operation (1-Add, 2-Sub, 3-Mul, 4-Div): ");
    scanf("%d",&operation);
    switch(operation){
        case 1:
                printf("Result= %d\n",a+b);
                break;
        case 2:
                printf("Result= %d\n",a-b);
                break;
        case 3:
                printf("Result= %d\n",a*b);
                break;
        case 4:
                printf("Result= %d\n",a/b);
                break;
        default:
                printf("Wrong Input!\n");
                break;
    }
    return 0;
}