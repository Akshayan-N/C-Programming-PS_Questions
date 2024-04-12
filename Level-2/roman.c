#include <stdio.h>

// Function to convert integer to Roman numeral
void intToRoman(int num) {
    // Arrays to store Roman numeral symbols and their corresponding values
    int decimalValue[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    const char *romanValue[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    // Iterate through each symbol
    for (int i = 0; i < 13; i++) {
        // Repeat while num is greater than or equal to the decimal value at index i
        while (num >= decimalValue[i]) {
            printf("%s", romanValue[i]); // Print the corresponding Roman numeral symbol
            num -= decimalValue[i]; // Subtract the decimal value from num
        }
    }
}

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Check if the number is within the valid range
    if (num <= 0 || num > 3999) {
        printf("Invalid input. Please enter a number between 1 and 3999.\n");
    } else {
        printf("Roman numeral representation: ");
        intToRoman(num); // Convert and print Roman numeral representation
        printf("\n");
    }

    return 0;
}
