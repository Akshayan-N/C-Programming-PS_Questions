// 2. The total salary and expenditure will be given,Find savings and savings percent

#include <stdio.h>

int main(void)
{
    int salary, expense;

    printf("Enter the Salary : ");
    scanf("%i", &salary);

    printf("Enter the expenditure : ");
    scanf("%i", &expense);

    int saving = salary - expense;

    printf("Saving : %i\n", saving);
    printf("Saving Percent age is %2.f%%", saving / (float) salary * 100);
}