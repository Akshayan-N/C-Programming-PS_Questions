// Given an integer, print the sum of geometric progression series upto to the given integer range ( 1/2+1/4+1/8+.....)

#include <stdio.h>

int main(void)
{
    int num;
    printf("Enter the number : ");
    scanf("%i", &num);

    float sum = 0;
    int gp = 2;
    for (int i = 1; i < num; i++ , gp *= 2)
    {
        sum += 1 / (float) gp;
    }

    printf("sum of GP : %f", sum);
}