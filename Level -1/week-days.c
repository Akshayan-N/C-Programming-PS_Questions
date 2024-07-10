//2) To input a number between 1 to 7 and print the corresponding day of the week.(1-Monday, 2-Tuesday etc) 

#include <stdio.h>

int main(void)
{
    char* days[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    int day;
    printf("Enter the day : ");
    scanf("%i", &day);
    day--;

    if (day >= 0 && day <= 6)
    {
        printf("The Day is %s", days[day]);
    }
    else
    {
        printf("Wrong Input. Enter b/w {1 - 7}");
    }

}