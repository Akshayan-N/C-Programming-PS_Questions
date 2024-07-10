// 1. Write a C program that reads the dimensions (width and height) of a shape and 
// if both sides are same its square , else its rectangle. 
// Print the shape name and its area.


#include <stdio.h>

void main(void)
{
    float width, height;
    printf("Enter the height : ");
    scanf("%f", &height);
    printf("Enter the width : ");
    scanf("%f", &width);

    if (height == width)
    {
        printf("Square");
    }
    else
    {
        printf("Rectangle");
    }
    printf("\n");
    printf("Area : %.2f", height * width);
}