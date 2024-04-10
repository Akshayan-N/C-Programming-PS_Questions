// 1. To find the average of 5 marks if calculate grade for that marks

#include <stdio.h>
#define MAX_SUBJECTS 5

void main(void)
{
    int marks[MAX_SUBJECTS];
    for (int i = 0; i < MAX_SUBJECTS; i++)
    {   
        printf("Enter Subject %i Marks: ", i+1);
        scanf("%i", &marks[i]);
    }

    int sum = 0;
    for (int i = 0; i < MAX_SUBJECTS; i++)
    {   
        sum += marks[i];
    }
    float average = sum / (float) MAX_SUBJECTS;

    if (average > 90)
    {
        printf("A");
    }
    else if (average > 80)
    {
        printf("B");
    }
    else if (average > 70)
    {
        printf("C");
    }
    else if (average > 60)
    {
        printf("D");
    }
    else
    {
        printf("E");
    }
    
}
