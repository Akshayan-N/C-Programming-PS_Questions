#include <stdio.h>

int gcd(int a, int b)
{
    if (a == 0){
        return b;
    }
    return gcd(b, a % b);
    
}
int main()
{
    int number1, number2;
    printf("Enter the number 1, number 2 : ");

    scanf("%i, %i", &number1, &number2);

    printf("The GCD of %i, %i is %i", number1, number2, gcd(number1, number2));
}