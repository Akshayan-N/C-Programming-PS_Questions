// Add each digit of the given number untill the sum
//  becomes a single digit

#include <stdio.h>

int sum_digits(int);

int main(void)
{
    int num;
    printf("Enter the number : ");
    scanf("%i", &num);

    while (num / 10 != 0)
    {
        num = sum_digits(num);
    }
    
    printf("%i", num);
}

int sum_digits(int number)
{
    if (number == 0)
    {
        return 0;
    }
    else
    {
        return number % 10 + (sum_digits(number / 10));
    }
}