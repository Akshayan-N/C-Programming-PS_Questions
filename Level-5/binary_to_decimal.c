#include <stdio.h>

int binary2Decimal(int binary)
{
    int value = 1;
    int decimal = 0;
    while (binary != 0)
    {
        decimal += (binary % 10) * value;
        binary /= 10;
        value *= 2; 
    }
    return decimal;
}
int main()
{
    int binary_number;
    printf("Enter the binary number : ");
    scanf("%i", &binary_number);

    printf("The decimal number of %i is %i.", binary_number, binary2Decimal(binary_number));
    return 0;
}