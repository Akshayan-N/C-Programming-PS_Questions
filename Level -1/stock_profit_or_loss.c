//Given with the inital stock price value and and no of stocks to purchase and current stock price value,
// display the profiit and loss (formula was given)

#include <stdio.h>

void main(void)
{
    float inital_stock_price = 200;
    int nos_stock = 5;
    float current_stock_price = 220;

    if (inital_stock_price < current_stock_price)
    {
        printf("Profit : %.2f", (current_stock_price - inital_stock_price) * nos_stock);
    }
    else if (inital_stock_price > current_stock_price)
    {
        printf("Loss : %.2f", (inital_stock_price - current_stock_price) * nos_stock);
    }
    else
    {
        printf("No Profit or Loss");
    }
}

