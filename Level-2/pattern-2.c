// 2.pattern printing - no of rows and column - 3
//  5
//  5 10
//  5 10 15

#include <stdio.h>

int main(void)
{
    int multipler = 5;
    int num;
    printf("Enter N : ");
    scanf("%i", &num);

    for (int i = 1; i <= num; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            printf("%i ", j * multipler);
        }
        printf("\n");
    }
}