// conversion of farenheit to celcius  

#include <stdio.h>

void main(void)
{
    float temp;
    printf("Enter the temperature in farenheit : ");
    scanf("%f", &temp);

    printf("Celcius : %f", 5 / 9.0 * (temp - 32));
}