// Write a program that asks for a username and password (hardcode both), and prints “Login Successful” if both match, otherwise “Access Denied”. Use an if-else statement.

#include<stdio.h>

int main(){
    char user,pass;
    printf("Enter username: ");
    scanf(" %c",&user);
    printf("Enter password: ");
    scanf(" %c",&pass);
    if(user=='a'&&pass=='2'){
        printf("Login Successful!\n");
    }
    else{
        printf("Access Denied!\n");
    }
    return 0;
}