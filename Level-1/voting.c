// 1.Eligible for voting(if else) 

#include <stdio.h>

void main(void)
{
    int age;
    printf("Enter the Age : ");
    scanf("%i", &age);

    if (age > 17)
    {
        printf("Eligible for voting");
    }
    else if (age > 0 && age < 18)
    {
        printf("Not Eligible for voting");
    }
    else
    {
        printf("Invaild Age");
    }
}