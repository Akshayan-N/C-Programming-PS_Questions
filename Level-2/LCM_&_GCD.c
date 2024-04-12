//  Find LCM and GCD of a two numbers

#include <stdio.h>

int gcd(int a, int b)
{
    if (!b)
    {
        return a;
    }
    return gcd(b, a % b);
}

int main(void)
{
    int num1, num2;
    
    printf("Enter number 1 : ");
    scanf("%i", &num1);

    printf("Enter number 2 : ");
    scanf("%i", &num2);

    int gcd_val = gcd(num1, num2);
    printf("GCD : %i\n", gcd_val);
    printf("LCM : %i", (num1 * num2) / gcd_val);

    return 0;
}