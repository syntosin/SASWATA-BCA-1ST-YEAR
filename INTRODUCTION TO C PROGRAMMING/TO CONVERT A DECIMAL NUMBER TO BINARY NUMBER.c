//WRITE A C PROGRAM TO CONVERT A DECIMAL NUMBER TO BINARY NUMBER
#include <stdio.h>
int main() 
{
int d,b= 0,i = 1,remainder;
printf("Enter a decimal number: ");
scanf("%d", &d);
while (d != 0)
{
remainder = d % 2;
d/= 2;
b+= remainder * i;
i*= 10;
}
printf("Binary number: %d\n",b);
}