//Buy tickets based on age.(if greater than 12 print adult ticket if less than print eligible for child discount)  

#include <stdio.h>

void main(void)
{
    int age;
    printf("Enter the Age: ");
    scanf("%i", &age);

    if (age > 15)
    {
        printf("Adult Tickets");
    }
    else if (age >= 0 && age <= 15)
    {
        printf("eligible for child discount");
    }
    else
    {
        printf("Invaild Age");
    }
    
}