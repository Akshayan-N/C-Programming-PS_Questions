// 2.The attendance percentage calculation

#include <stdio.h>

void main(void)
{
    int nos_present_day, total_days;

    printf("Enter the Total present days : ");
    scanf("%i", &nos_present_day);

    printf("Enter the Total Working days : ");
    scanf("%i", &total_days);

    

    printf("Student Attandance percent : %.2f%%", ( nos_present_day / (float) total_days )  * 100);

}