// Print the prime numbers in the given range

#include <stdio.h>
#include <math.h>

int main(void)
{
    int start, end;

    printf("Start : ");
    scanf("%i", &start);

    printf("End : ");
    scanf("%i", &end);

    for (int i = start; i <= end; i++)
    {
        int flag = 1;
        for (int j = 2; j < sqrt(i); j++)
        {
            if (i % j == 0)
            {
                flag--;
                break;
            }
        }

        if (flag && i > 1)
        {
            printf("%i ", i);
        }
    }
}