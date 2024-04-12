// Next Palindromic sequence.

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
    num++;

    while(1)
    {
        if (palindrome(num))
        {
            printf("Plaindrome : %i", num);
            break;
        }  
        num++;
    }
}