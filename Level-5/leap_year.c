#include <stdio.h>

void check_leap_year(int year){
    if (year % 400 == 0){
        printf("Leap Year");
    }
    else if (year % 100 == 0){
        printf("Non-Leap Year");
    } else if (year % 4 == 0){
        printf("Leap Year");
    } else {
        printf("Non-Leap Year");
    }
    return ;
}
int main()
{
    int year;
    printf("Enter the year : ");
    scanf("%i", &year);

    check_leap_year(year);
}