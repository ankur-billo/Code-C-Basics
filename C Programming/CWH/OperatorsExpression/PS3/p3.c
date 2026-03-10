// Write a program that checks whether a person is eligible to vote. A person is eligible if their age is 18 or above and they are a citizen (use 1 for Yes, 0 for No). Print 1 for yes and 0 for no

// Example Input/Output:

// Enter age: 20
// Are you a citizen (1 for Yes / 0 for No): 1
// 1

#include<stdio.h>

int main(){
    int age, citizen;
    printf("Enter age: ");
    scanf("%d",&age);
    printf("Are you a citizen (1 for Yes / 0 for No): ");
    scanf("%d",&citizen);

    // for printing true = 1 && false = 0 withou else if hardcode
    int eligible = (age>=18 && citizen == 1);
    printf("%d\n",eligible);
    return 0;
}