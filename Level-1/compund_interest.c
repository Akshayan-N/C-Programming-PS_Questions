//To find compound interest .the formula is given

#include <stdio.h>
#include <math.h>

void main(void)
{
    
    float principal, total_amount, interest_rate;
    int nos_times, time_period;

    printf("Enter the principal amount : ");
    scanf("%f", &principal);

    printf("Enter the interest rate : ");
    scanf("%f", &interest_rate);

    printf("Enter the number of times to apply interest : ");
    scanf("%i", &nos_times);

    printf("Enter the time period : ");
    scanf("%i", &time_period);


    total_amount = principal * pow(1 + interest_rate / ((float) nos_times * 100), nos_times * time_period);

    printf("Total compound amount is %.2f", total_amount);

}