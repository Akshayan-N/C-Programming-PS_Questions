//  2. Get input row from user and print the following pattern.
// Input : 3 
// Output: 
//  A
//  B B
//  C C C

#include <stdio.h>

int main(void)
{
    int num;
    printf("Enter the number : ");
    scanf("%i", &num);
    num--;

    if (num < 0 && 25 > num)
    {
        printf("Enter b/w {1-26}");
        return 1;
    }
    for (int i = 0; i <= num; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            printf("%c ", 'A' + i);
        }
        printf("\n");
    }
}