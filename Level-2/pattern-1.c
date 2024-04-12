// INPUT : 4
// OUTPUT
// 1 2 3 4 
// 1 2 3
// 1 2
// 1

#include <stdio.h>

int main(void)
{
    int num;
    printf("Enter the number : ");
    scanf("%i", &num);

    for (int i = num; 0 < i; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%i ", j);
        }
        printf("\n");
    }
}