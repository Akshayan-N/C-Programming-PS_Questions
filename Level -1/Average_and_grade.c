// 1. To find the average of 5 marks if calculate grade for that marks
#include <stdio.h>

void main(void)
{
    int max_subects = 5;
    int marks[max_subects];
    for (int i = 0; i < max_subects; i++)
    {   
        printf("Enter Subject %i Marks: ", i+1);
        scanf("%i", &marks[i]);
    }

    int sum = 0;
    for (int i = 0; i < max_subects; i++)
    {   
        sum += marks[i];
    }
    float average = sum / (float) max_subects;

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
    else if (average > 40)
    {
        printf("E");
    }
    else
    {
        printf("F");
    }
}
