#include <stdio.h>
#include <math.h>

int main()
{
    int number;
    printf("Enter your number : ");
    scanf("%i", &number);

    if (number < 2){
        printf("False");
        return 1;
    }

    for (int i = 2, len = (int) sqrt(number); i <= len; i++)
    {
        if (number % i == 0)
        {
            printf("False");
            return 1;
        }
    }
    printf("True");
    return 0;
}