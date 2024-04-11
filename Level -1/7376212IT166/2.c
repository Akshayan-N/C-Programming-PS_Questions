//  2.  using logical operator and arthimetic  operator to find the petrol cost 

#include <stdio.h>

#define PETROL_PRICE_PER_LITER 2.5
#define DISCOUNT_THRESHOLD 20
#define DISCOUNT_PERCENTAGE 5

int main(void) {
    float liters, cost, discount, final_cost;

    // Input the number of liters
    printf("Enter the number of liters: ");
    scanf("%f", &liters);

    // Calculate the cost without discount
    cost = liters * PETROL_PRICE_PER_LITER;

    // Apply discount if applicable
    if (liters > DISCOUNT_THRESHOLD) {
        discount = cost * (DISCOUNT_PERCENTAGE / 100.0); // Calculate the discount
        final_cost = cost - discount; // Calculate the final cost after discount
    } else {
        discount = 0; // No discount
        final_cost = cost; // Final cost without discount
    }

    // Output the result
    printf("Cost without discount: $%.2f\n", cost);
    printf("Discount applied: $%.2f\n", discount);
    printf("Final cost: $%.2f\n", final_cost);

    return 0;
}
