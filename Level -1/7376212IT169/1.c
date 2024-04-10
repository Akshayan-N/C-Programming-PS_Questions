// 1. A company  decides to give bonus to all its employees on new year.
// A 5% bonus on salary is given to male workers and 10% bonus on salary is given to female workers.  
// write a C program to enter the salary and gender of the employees.  
// If the salary of the employee is less than 10000, then the employee gets an extra 2% bonus on salary.  
// Calculate the bonus that has to be given to the employee and display the salary that the employee will get? 

#include <stdio.h>
#include <ctype.h>
void main(void)
{
    int salary;
    int bonus = 5;
    char gender;

    printf("Enter the salary : ");
    scanf("%i", &salary);

    printf("Enter your gender M/F : ");;
    scanf(" %c", &gender);

    if (tolower(gender) == 'f')
    {
        bonus = 10;
    }

    if (salary < 10000)
    {
        bonus += 2;
    }
    
    float total_salary = salary + (salary * bonus / 100.0);
    printf("Total Salary with Bonus : %.2f", total_salary);

}