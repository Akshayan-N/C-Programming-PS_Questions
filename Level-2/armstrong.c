// 153 (3 digits) --> 1^3 + 5^3 + 3^3 = 153
// also called narcisstic number

#include <stdio.h>
#include <math.h>
int main(void)
{
    int num;
    printf("Enter the number : ");
    scanf("%i", &num);

    int len = log10(num) + 1;
    
    int sum = 0;
    int number = num;

    
    while (number)
    {
        sum += pow(number % 10, len);
        number /= 10;
    }
    
    if (sum == num)
    {
        printf("Its a Armstrong number");
    }
    else
    {
        printf("Its not a Armstrong number");
    }

    return 0;
}