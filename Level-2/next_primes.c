//  1.Print next 5 palindrome number if the given input is 500 print 505,515,525,535,545 like this

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

    int count = 0;
    for(;count < 5;)
    {
        if (palindrome(num))
        {
            printf("%i\n", num);
            count++;
        }
        num++;
    }
}