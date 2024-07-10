// 1. to find the length of a number without using loop

#include <stdio.h>
#include <math.h>

void main(void)
{
    int number;
    printf("Enter your input : ");
    scanf("%i", &number);
    
    printf("Total digits : %i", log10(number) + 1);
}
