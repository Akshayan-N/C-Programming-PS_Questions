// 2.Square Pattern
// Input: 4
// Output: ####
// ####
// ####

#include <stdio.h>

int main(void)
{
    int num;
    printf("Enter the number : ");
    scanf("%i", &num);

    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= num; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}