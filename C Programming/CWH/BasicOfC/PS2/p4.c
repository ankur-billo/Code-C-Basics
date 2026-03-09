// Write a program that asks the user to enter the radius of a circle and then calculates and prints its area. (Use the formula: Area = π * r * r, where π = 3.1416)

#include<stdio.h>
int main(){
    int r; float area,pi=3.1416;
    printf("Enter the radius: ");
    scanf("%d",&r);
    area= pi*r*r;
    printf("Area: %.2f",area);
    return 0;
}