#include <stdio.h>
#include <math.h>

int check_prime(int num)
{   
    int flag = 1;
    for (int j = 2; j <= (int) sqrt(num); j++){
        if (num % j == 0){
            flag = 0;
            break;
        }
    }

    return flag;
}
int main()
{
    int number;
    printf("Enter the number : ");
    scanf("%i", &number);

    if (number < 5){
        printf("False");
        return 1;
    }

    int prime_numbers[100] = {0};
    int count = 0;

    for (int i = 2; ;i++){
        if (check_prime(i)){
            if (i + 2 > number) {
                printf("False");
                return 1;
            }
            for (int j = 0; j < count; j++){ 
                if (i + prime_numbers[j] == number){
                    // printf("True");
                    printf("%i is the sum of prime numbers %i and %i", number, prime_numbers[j], i);
                    return 0;
                }
            }
            if (count < 100) {
                prime_numbers[count++] = i;
            } else {
                printf("Array full , increase the array size.");
                return 1;
            }
        }
        
    }
}