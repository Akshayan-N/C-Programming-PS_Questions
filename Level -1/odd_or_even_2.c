// 1. Check wheather the given number is odd or even. 
// If the number is odd multiply by three.
// If the given number is even divided by three(12(input)4(output)).

#include <stdio.h>

void main(void)
{
    int num;
    printf("Enter the number : ");
    scanf("%i", &num);

    if (num % 2)
    {
        printf("%i", num * 3);
    }
    else{
        printf("%.2f", num / 3.0);
    }
}