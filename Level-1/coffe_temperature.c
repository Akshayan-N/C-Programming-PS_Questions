//If the coffee is more than the heat level print "Coffe is hot" else print "low"  

#include <stdio.h>
void main(void)
{
    int THRESHOLD_TEMP = 30;
    float temp;
    printf("Enter the temperature of the coffee : ");
    scanf("%f", &temp);

    if (temp < THRESHOLD_TEMP)
    {
        printf("low");
    }
    else
    {
        printf("Coffee is hot");
    }
}