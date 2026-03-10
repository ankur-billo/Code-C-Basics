// A student is eligible for admission if:
// Their math marks ≥ 60
// Their physics marks ≥ 50
// Their chemistry marks ≥ 40
// And the total marks ≥ 200
// Use nested if statements to check eligibility.

// Example Input/Output:

// Enter marks in Math, Physics, Chemistry: 70 55 50  
// Eligible for admission

#include<stdio.h>

int main(){
    int m,p,c;
    printf("Enter marks in Math, Physics, Chemistry: ");
    scanf("%d%d%d",&m,&p,&c);
    // nested if method

    if(m>=60){
        if(p>=50){
            if(c>=90){
                if((m+p+c)>=200){
                    printf("Eligible for admission!\n");
                }else{
                    printf("Total Marks less than required!\n");
                }
            }else{
                printf("Marks of Chemistry is Low!\n");
            }
        }else{
            printf("Marks of Physics is Low!\n");
        }
    }else{
        printf("Marks of Maths is Low!\n");
    }



    // single if method
    // if(m>=60 && p>=50 && c>=40 && (m+p+c)>=200){
    //     printf("Eligible for admission!\n");
    // }else{
    //     printf("Not Eligible for admission!\n");
    // }
    return 0;
}