#include <stdio.h>
// #include <math.h>

float findSquareRoot(float number, float low, float high)
{
    // return (float) sqrt(number);

    if (number == 0)
    {
        return 0;
    }

    float mid = (high + low) / 2;
    if (mid * mid <= number && ((mid + 0.01) * mid + 0.01) > number){
        return mid;
    }
    else if ((mid * mid) < number){
        return findSquareRoot(number, mid + 0.01 , high);
    }
    else{
        return findSquareRoot(number, low , mid);
    }

}
int main()
{
    float number;
    printf("Enter the value : ");
    scanf("%f", &number);

    if (number < 0){
        printf("Error: Cannot calculate the square root of a negative number.");
        return 1;
    }

    printf("The square root of %.2f is %.2f", number, findSquareRoot(number,0 , number));
    return 0;
}