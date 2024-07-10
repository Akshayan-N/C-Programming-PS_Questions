//greatest of three numbers

#include <stdio.h>

int max(int a, int b)
{
    return (a > b) ? a : b;
}
int main(void)
{
    int number[3];
    for (int i = 0; i < 3; i++)
    {
        printf("Enter Number %i : ", i+1);
        scanf("%i", &number[i]);
    }

    int max_number = number[0];
    for (int i = 1; i < 3; i++)
    {
        max_number = max(max_number, number[i]);
    }
    
    printf("Max Value : %i", max_number);

    return 0;
}