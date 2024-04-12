// .Input a number n and check whether it is even or odd and if it's odd print the odd number 
// before n and if it's even number,print the even numbers before n

#include <stdio.h>

int main(void)
{
    int num;
    printf("Enter the number : ");
    scanf("%i", &num);

    int start = 0;
    if (num % 2)
    {
        start = 1;
    }

    for (int i = start; i < num; i += 2)
    {
        printf("%i ", i);
    }
}