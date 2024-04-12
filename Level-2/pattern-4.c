// right half pyramid pattern

#include <stdio.h>

int main(void)
{
    int num;
    printf("Enter the number : ");
    scanf("%i", &num);

    for(int i = 1; i <= num; i++)
    {
        for(int j = num - i; j > 0; j--)
        {
            printf(" ");
        }
        for(int j = 1; j <= i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}