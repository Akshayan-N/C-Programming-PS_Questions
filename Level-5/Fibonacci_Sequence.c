#include <stdio.h>

long fibonacci(int number){
    if (number < 1){
        return 0;
    }
    else if (number == 1)
    {
        return 1;
    }
    else{
        return fibonacci(number - 1) + fibonacci (number - 2);
    }
}

int main()
{
    int number;
    printf("Enter the number : ");
    scanf("%i", &number);
    printf("The fibonacci of %i is %ld", number, fibonacci(number));
}