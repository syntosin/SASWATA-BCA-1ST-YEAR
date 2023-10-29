//WRITE A PROGRAM IN C TO CHANGE THE VALUE OF A VARIABLE BY TAKING AN INPUT FROM THE USER

#include <stdio.h>
int main() {
    int a = 10;
    printf("The old value of a is: %d\n",a);
    printf("Enter a new value for a: ");
    scanf("%d", &a);
    printf("New value of a is: %d\n", a);
    return 0;
}

