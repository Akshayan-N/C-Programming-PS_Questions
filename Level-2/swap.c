// 1.Swapping of first and last digits(1234 -> 4231) 

#include <stdio.h>
#include <math.h>

int main(void)
{
    int num,last_digit,first_digit, power,len;
    printf("Enter the number : ");
    scanf("%i", &num);

    last_digit = num % 10;
    num /= 10;

    len = (int) log10(num);

    power = pow(10, len);
    first_digit = num / power;
    num %= power;

    num = (last_digit * power + num) * 10 + first_digit;

    printf("Output : %i", num);
}