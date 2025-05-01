#include <stdio.h>

// Write a program that keeps reading a password until it is correct.
// For each incorrect attempt, print the message "Invalid Password".
// When the correct password is entered, print "Access Granted" and terminate the program.
// Consider that the correct password is 2002.

int main(){
    int correctPassword = 2002, enteredPassword;

    printf("Enter the password: ");
    scanf("%d", &enteredPassword);

    while (enteredPassword != correctPassword) {
        printf("Invalid Password\n");
        printf("------------------\n");
        printf("Enter the password: ");
        scanf("%d", &enteredPassword);
    }

    printf("Access Granted\n");

    return 0;
}
