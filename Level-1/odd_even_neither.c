//  2. To print whether the given two inputs are even, odd or neither even or odd. 

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main(void)
{
    int MAX_LENGTH = 20;
    char number[MAX_LENGTH];
    printf("Enter the number : ");
    scanf("%s", number);
    
    int flag = 1;
    int last_digit;
    for (int i = 0; number[i] != '\0'; i++)
    {
        if (!isdigit(number[i]))
        {
            flag = 0;
            break;
        }
        if (number[i+1] == '\0')
        {
            last_digit = atoi(&number[i]);
        }
    }
    if (flag)
    {
        if (last_digit % 2)
        {
            printf("ODD");
        }
        else
        {
            printf("EVEN");
        }
    }
    else
    {
        printf("Neither Even or Odd");
        return 0;
    }
}