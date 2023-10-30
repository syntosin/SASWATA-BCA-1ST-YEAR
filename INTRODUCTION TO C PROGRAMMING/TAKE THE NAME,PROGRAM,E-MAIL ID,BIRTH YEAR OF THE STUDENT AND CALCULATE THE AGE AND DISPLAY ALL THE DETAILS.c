//WRITE A PROGRAM IN C TO TAKE THE NAME,PROGRAM,E-MAIL ID,BIRTH YEAR OF THE STUDENT AND CALCULATE THE AGE AND DISPLAY ALL THE DETAILS

#include <stdio.h>

int main() {
    char name[50];
    char prog[30];
    char email[50];
    int year;

    printf("Enter name: ");
    scanf("%s", name); 
    printf("Enter Program: ");
    scanf("%s", prog);
    printf("Enter E-Mail: ");
    scanf("%s", email);
    

    printf("Enter Birth Year: ");
    scanf("%d", &year);
    // Calculate age
    int currentYear = 2023;
    int age = currentYear - year;
    printf("------------------------\n");
    printf("Your name: %s\n", name);
    printf("Your program: %s\n", prog);
    printf("Your e-mail: %s\n", email);
    printf("Your age: %d\n", age);

    return 0;
}

