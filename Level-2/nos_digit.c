// To find number of digits in the given input - integer number. 

#include <stdio.h>
#include <math.h>

int main(void)
{
    int num;
    printf("Enter the number : ");
    scanf("%i", &num);

    printf("Nos of digits : %i", (int) log10(num) + 1);
}