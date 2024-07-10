#include <stdio.h>
#include <math.h>

int check_armstrong(int num){
    int dup_num = num;
    int len = log10(num) + 1;
    int sum = 0;
    for (int i = 0; i < len; i++){
        sum += pow(dup_num % 10, len);
        dup_num /= 10;
    }

    return (sum == num);
}
int main(){
    int number; 
    printf("Enter the number : ");
    scanf("%i", &number);


    if (check_armstrong(number)){
        printf("Armstrong number aka Perfect Number");
    } else {
        printf("Not Armstrong number aka not Perfect Number");
    }
}