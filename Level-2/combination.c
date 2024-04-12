// In a conference hall has 6 members how many time they will give handshake to each other not more than once

#include <stdio.h>

long factorial(int number)
{
    long fact = 0;
    if(!number)
    {
        return 1;
    }
    
    return number * factorial(number -1);
}

int main(void)
{
    int members = 6;

    int shakehands = factorial(members) / (factorial(members -2) * factorial(2));
    printf("No of handshakes : %i", shakehands);
}