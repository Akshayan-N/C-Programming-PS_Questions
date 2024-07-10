//Find the shipping cost of the product by multiplying the given cost value according to the range.

#include <stdio.h>

int main(void)
{
    float cost, shipping_cost;
    
    printf("Enter the cost : ");
    scanf("%f", &cost);
    
    if (cost <= 100)
    {
        shipping_cost = cost * 0.05;
    }
    else if (cost > 100 && cost <= 500)
    {
        shipping_cost = cost * 0.07;
    }
    else
    {
        shipping_cost = cost * 0.10;
    }
    
    printf("Shipping cost: $%.2f\n", shipping_cost);

    return 0;
}
