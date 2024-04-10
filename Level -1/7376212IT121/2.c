// 2.To find the cost of a movie ticket. 
// There is different cost for each persons like children it cost $5, for adult $7 and for old age $5.
// Get the user input for each person separately. Calculate the total no of persons and total cost based on the condition. 
// If the total persons is more than 5 then there is a discount of 10% in the movie ticket, if not print the original ticket cost.

#include <stdio.h>
#define TOTAL_GRP 3

void main(void)
{
    
    int cost[] = {5, 7, 5};
    char* list[] = {"children", "Adults", "old-age people"};
    int total_count = 0;
    int total_cost = 0;
    for (int i =0; i < TOTAL_GRP; i++)
    {
        int count;
        printf("Enter the no of %s : ", list[i]);
        scanf("%i", &count);
        total_count += count;
        total_cost += count * cost[i];
    }

    float discounted_price;
    if (total_cost > 5)
    {
        discounted_price = total_cost - (total_cost / 10.0);
        printf("Price : %.2f", discounted_price);
        return ; 
    }

    printf("Price : .2f ", total_cost);

}