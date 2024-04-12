// The number of leap year in decades

#include <stdio.h>

int check_leap(int year)
{
    if ((!(year % 100) && !(year % 400)) || (!(year %4)))
    {
        return 1;
    }
    return 0;
}

int main(void)
{
    int year;
    
    printf("Enter the year : ") ;
    scanf("%i", &year);
    int decades = 1 * 10;
    year++;

    int count=0;
    for (int i = year; i <= year + decades; i++)
    {
        if(check_leap(i))
        {
            printf("%i\n", i);
            count++;
        }
    }
    printf("Number of leap years: %i ",count);

}