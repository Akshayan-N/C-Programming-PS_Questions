// Write a program that reads XY coordinates from the user and categorizes each point into one of the following regions:
// Origin: If the coordinates are (0,0).
// Quadrant 1 (First Quadrant): If x > 0 and y > 0.
// Quadrant 2 (Second Quadrant): If x < 0 and y > 0.
// Quadrant 3 (Third Quadrant): If x < 0 and y < 0.
// Quadrant 4 (Fourth Quadrant): If x > 0 and y < 0.
// X-axis: If x > 0 and y = 0.
// Y-axis: If x = 0 and y > 0.


#include <stdio.h>

void main(void)
{
    float x, y;

    printf("X : ");
    scanf("%f", &x);

    printf("Y : ");
    scanf("%f", &y);

    if (x == 0)
    {
        if (y == 0)
        {
            printf("Origin");
        }
        else
        {
            printf("Y-axis");
        }
    }
    else if (y == 0)
    {
        printf("X-axis");
    }

    else if (x > 0)
    {
        if (y > 0)
        {
            printf(" Quadrant 1");
        }
        else
        {
            printf(" Quadrant 4");
        }
    }
    else
    {
        if (y > 0)
        {
            printf(" Quadrant 2");
        }
        else
        {
            printf(" Quadrant 3");
        }
    }
}