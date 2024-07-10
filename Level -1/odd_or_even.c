//odd or even program 

#include <stdio.h>

void main(void)
{
    int number;
    printf("Enter the number : ");
    scanf("%i", &number);

    if (number % 2)
    {
        printf("Odd Number");
    }
    else
    {
        printf("Even Number");
    }
    
}