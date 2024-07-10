// 1) Write a program to input month number and print month Name.
#include <stdio.h>

void main(void)
{
    char* months[12] = 
    {
        "January",
        "February",
        "March",
        "April",
        "May",
        "June",
        "July",
        "August",
        "September",
        "October",
        "November",
        "December" 
    };

    int month;
    printf("Enter the month number : ");
    scanf("%i", &month);
    month = month -1;

    if (month < 0 || month > 11)
    {
        printf("Wrong Input, Enter b/w {1-12}");
    }
    else
    {
        printf("%s", months[month]);
    }
}