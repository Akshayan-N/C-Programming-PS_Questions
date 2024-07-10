//If the given two input numbers are equal print 0 else print its difference.

#include <stdio.h>

void main(void)
{
    int num1,num2;

    printf("Enter Number 1: ");
    scanf("%i", &num1);
    printf("Enter Number 2 : ");
    scanf("%i", &num2);

    if (num1 < num2)
    {
        printf("%i", num2 - num1);
    }
    else
    {
        printf("%i", num1 - num2);
    }
    
}