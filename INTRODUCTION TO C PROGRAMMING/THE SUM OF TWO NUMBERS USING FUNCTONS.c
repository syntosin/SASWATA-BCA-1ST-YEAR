//WAP IN C TO FIND THE SUM OF TWO NUMBERS USING FUNCTONS

#include <stdio.h>

int add(int a, int b){
    int sum=a+b;
    return sum;
}

int main() {
    int a;
    int b;
    printf("ENTER THE VALUE OF A :\n");
    scanf("%d", &a);
    printf("ENTER THE VALUE OF B :\n");
    scanf("%d", &b);
    int value = add(a,b);
    printf("%d\n", value);
}
