// 2) To find the sum of given two numbers and find odd or even of the sum

#include <stdio.h>

int main(void)
{
    int num1,num2;

    printf("Enter Number 1 : ");
    scanf("%i", &num1);

    printf("Enter Number 2 : ");
    scanf("%i", &num2);

    if ((num1 + num2) % 2)
    {
        printf("The Sum is Odd");
    }
    else
    {
        printf("The Sum is Even");
    }
}