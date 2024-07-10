//  2.Get 3 inputs from the user First get the selling price per unit.Next the quantity sold .
// Then The input Of middlemen used.Choose from these middlemen A, B and C who deducts 10%, 20% and 30% respectively
// Find the total revenue after deduction by the middlemen
// Display "Invalid middleman" if the middlemen entered is nt A, B, C and print the original amount without deduction any deduction

#include <stdio.h>
#include <ctype.h>

void main(void)
{
    float selling_price;
    int quantity_sold;
    char middleman;

    printf("Enter the selling price : ");
    scanf("%f", &selling_price);

    printf("Enter the quantity sold : ");
    scanf("%i", &quantity_sold);

    printf("Enter the middle man (A, B,C) : ");
    scanf(" %c", &middleman);
    middleman = toupper(middleman);
    float deduction = 0;
    if (middleman == 'A' || middleman == 'B' || middleman == 'C')
    {
        deduction = 0.10 * ((int) ( middleman - 'A' + 1));
    }
    else
    {
        printf("Invalid middleman");
    }

    printf("Total revenue : %.2f ", selling_price * quantity_sold - (selling_price * quantity_sold * deduction));

}