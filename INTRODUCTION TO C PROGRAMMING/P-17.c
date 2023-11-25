//WAP IN C TO CALCULATE SUM OF NATURAL NUMBERS USING FUNCTION
#include <stdio.h>

int sum(int n) {
    if (n == 0) {
        return 0;
    } else {
        return n + sum(n - 1);
    }
}

int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Please enter a positive integer.\n");
    } else {
        int result = sum(n);
        printf("Sum of the natural numbers is %d.\n", result);
    }

    return 0;
}