// print all even numbers in the Fibonacci sequence that are less than n.

#include <stdio.h>

int main(void)
{
    int n;
    printf("Enter the n : ");
    scanf("%i", &n);

    int a = 0;
    int b = 1;
    int sum = a + b;
    printf("%i ", a, b);
    for(int i = 2; sum < n; i++)
    {
        
        if(!(sum % 2))
        {
            printf("%i ", sum);
        }

        a = b;
        b = sum;
        sum = a + b;
    }
}