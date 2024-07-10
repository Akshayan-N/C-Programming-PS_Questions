#include <stdio.h>
#include <math.h>

int main(){
    int number, power;
    printf("Enter the number in (number,power) : ");
    scanf("(%i,%i)", &number, &power);

    printf("Output: %ld", (long) pow(number, power));
}