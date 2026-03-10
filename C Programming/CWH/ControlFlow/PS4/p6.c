// Write a program that takes a single character as input and determines whether it is a vowel, consonant, digit, or special character. Use a combination of if-else and logical operators.

// Example Input/Output:

// Enter a character: a  
// Vowel

#include<stdio.h>

int main(){
    char c;
    printf("Enter a character: ");
    scanf("%c",&c);
    if((c>='A' && c<='Z')||(c>='a' && c<='z')){
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U'){
            printf("%c is a Vowel!\n",c);
        }else{
            printf("%c is a Constant!\n",c);
        }
    }
    else if(c>='0' && c<='9'){
        printf("%c is a Digit!\n",c);
    }
    else{
        printf("%c is a Special Character!\n",c);
    }
    // printf("%c\n",c);
    return 0;
}