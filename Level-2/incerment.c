// 1. Program To Increment By 1 To All The Digits Of A Given Integer
// Input : 203 Output: 314

#include <stdio.h>

int inc(int number)
{
    int temp = 0;
    int i = 1;
    while (number)
    {
        int digit = number % 10;
        temp += (digit + 1) * i;
        number /= 10;
        i *= 10;
    }
    return temp;
    
}
int main(void)
{
    int num;
    printf("Enter the number  : ");
    scanf("%i", &num);

    printf("Output : %i", inc(num));
}