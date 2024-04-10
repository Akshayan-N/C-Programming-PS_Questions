// 1. to find the length of a number without using loop

//Using Recurion

#include <stdio.h>
int count_digit(int);

void main(void)
{
    int number;
    printf("Enter your input : ");
    scanf("%i", &number);
    
    printf("Total digits : %i", count_digit(number));
}

int count_digit(int number)
{
    if (!number)
    {
        return 0;
    }
    else
    {
        return 1 + count_digit(number / 10);
    }
}