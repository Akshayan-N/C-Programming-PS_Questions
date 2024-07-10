//To find odd and even sum of a given number without using loops Eg 1234 is the given digit, 
// evensum=6(2+4) oddsum=4(1+3)only 4digit numbers will be given. 


#include <stdio.h>
int calc_sum(int num, int flag)
{
    if (!num)
    {
        return 0;
    }
    else
    {
        if (num % 2 == flag)
        {
            return num % 10 + calc_sum(num / 10, flag);
        }
        
        return calc_sum(num / 10 , flag);
        
    }
}
int main(void)
{
    int number;
    printf("Enter the number : ");
    scanf("%i", &number);

    printf("sum-odd : %i\n", calc_sum(number, 1));
    printf("sum-even : %i", calc_sum(number, 0));
}