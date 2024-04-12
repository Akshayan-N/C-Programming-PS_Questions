// 1.1-x^2/2!+x^4/4!-x^6/6!........ find the sum of the series no of terms and x values will be given

#include <stdio.h>
#include <math.h>

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
    int x;
    printf("Enter x : ");
    scanf("%i", &x);

    int num;
    printf("Enter the number : ");
    scanf("%i", &num);

    float sum = 1;
    int gp = 2;
    for (int i = 1; i <= num; i++, gp += 2)
    {
        sum -= pow(x, gp) / (float) factorial(gp);
    }

    printf("sum of gp : %f", sum);
}