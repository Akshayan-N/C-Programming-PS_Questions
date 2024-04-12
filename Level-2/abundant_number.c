// 1.Find Whether the number is abundant number or not 
// I/P:12 
// Output : Abundant number explanation:1+2+3+4+6=16 
// which is 16>12 so it is abundant number 

#include <stdio.h>
int sum_divisors(int number)
{
    int sum = 0;
    for(int i = 1; i <= (number + 1) / 2 ; i++)
    {
        if(!(number % i))
        {
            sum += i;
        }
    }

    return sum;
}
int main(void)
{
    int num;
    printf("Enter the number : ");
    scanf("%i", &num);

    if (num < sum_divisors(num))
    {
        printf("Abundant number");
    }
    else
    {
        printf("Not a Abundant number");
    }
}