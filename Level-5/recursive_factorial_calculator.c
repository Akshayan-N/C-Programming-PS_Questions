#include  <stdio.h>

long factorial(int number){
    if(number == 0 ||  number == 1){
        return 1;
    }
    return number * factorial(number - 1);
}
int main()
{
    int number;
    printf("Enter the number : " );
    scanf("%i", &number);

    if (number < 0)
    {
        printf("Factorial of negative number is not defined");
        return 1;
    }
    printf("Factorial of %i is %li", number, factorial(number));
    return 0;
}