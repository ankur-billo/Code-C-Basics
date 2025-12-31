// Compute body mass index, BMI = weightinKGs / (HeightinMeters * HeightinMeters), Both
// weight and height values are positive real numbers. Your program should display BMI value
// followed by whether the person is Underweight, Normal, Overweight or Obese using the below
// ranges:
// BMI Values
// Underweight: less than 18.5
// Normal: >=18.5 and <25
// Overweight: >=25 and < 30
// Obese: >= 30
#include <stdio.h>

int main() {
    float weight, height, bmi;

    printf("Enter the weight (kg): ");
    scanf("%f", &weight);

    printf("Enter the height (meters): ");
    scanf("%f", &height);

    bmi = weight / (height * height);

    printf("BMI = %.2f\n", bmi);

    if (bmi < 18.5)
        printf("Underweight!\n");
    else if (bmi < 25)
        printf("Normal!\n");
    else if (bmi < 30)
        printf("Overweight!\n");
    else
        printf("Obese!\n");

    return 0;
}