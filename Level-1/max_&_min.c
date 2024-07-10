//Find the maximum and minimum of three numbers

#include <stdio.h>

int max(int a, int b)
{
    return (a < b) ? b : a;
}
int min(int a, int b)
{
    return (a > b) ? b : a;
}
int main(void)
{
    int num[3];

    for (int i = 0; i < 3; i++)
    {
        printf("Enter num%i : ", i+1);
        scanf("%i", &num[i]);
    }

    int min_val, max_val;
    min_val = max_val = num[0];

    for (int i = 1; i < 3; i++)
    {
        min_val = min(min_val, num[i]);
        max_val = max(max_val, num[i]);
    }

    printf("Min : %i\n", min_val);
    printf("Max : %i\n", max_val);

    return 0;
}