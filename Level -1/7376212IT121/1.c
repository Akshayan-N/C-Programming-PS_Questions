// 1.To count the number of digits of a number without using loops and print whether the given number is a 5 digit number or not.
// Sample testcases:
//  34567
// 34567 is a 5 digit number 
// -13789
// -13789 is a 5 digit number 
// 123
// 123 is not a 5 digit number

//Using Recurion

#include <stdio.h>
int count_digit(int);

void main(void)
{
    int number;
    printf("Enter your input : ");
    scanf("%i", &number);
    if (count_digit(number) == 5)
    {
        printf("%i is a 5 digit number", number);
    }
    else
    {
        printf("%i is not a 5 digit number", number);
    }
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