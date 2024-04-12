// Print the sum of all palindrome numbers from 0 to n
#include <stdio.h>

int palindrome(int number)
{
    int rev = 0;
    int temp = number;
    while (temp)
    {
        rev *= 10;
        rev +=temp % 10;
        temp /= 10;
    }

    return (rev == number)? 1 : 0;
}
int main(void)
{
    int num;
    printf("Enter the number : ");
    scanf("%i", &num);
    
    int sum = 0;
    for(int i = 0; i <= num; i++)
    {
        if (palindrome(i))
        {
            sum += i;
        }
    }

    printf("Sum of palindrome is : %i ", sum);
}