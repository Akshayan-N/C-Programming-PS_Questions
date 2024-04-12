#include <stdio.h>

int main(void)
{
    int limit;
    printf("Enter the limit : ");
    scanf("%i", &limit);

    int a = 0;
    int b = 1;
    printf("%i %i ", a, b);
    for(int i = 2;i < limit; i++)
    {
        int sum = a + b;
        printf("%i ", sum);

        a = b;
        b = sum;
    }
}